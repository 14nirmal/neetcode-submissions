#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        int n = nums.size();

        std::sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; i++) {
            
            // Skip duplicate values for 'i' to avoid duplicate triplets
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++; // Sum is too small, move left pointer right
                } 
                else if (sum > 0) {
                    k--; // Sum is too large, move right pointer left
                } 
                else {
                    // Found a valid triplet!
                    ans.push_back({nums[i], nums[j], nums[k]});
                    
                    // Skip duplicate values for 'j'
                    while (j < k && nums[j] == nums[j + 1]) {
                        j++;
                    }
                    // Skip duplicate values for 'k'
                    while (j < k && nums[k] == nums[k - 1]) {
                        k--;
                    }
                    
                    // Move pointers to the next unique elements
                    j++;
                    k--;
                }
            }
        }
        return ans;
    }
};