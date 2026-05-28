class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        int n = nums.size();
        vector<vector<int>> ans;
        if (n < 4)
            return {};
        sort(nums.begin(), nums.end());

        for (int a = 0; a < n - 3; a++) {
            // Skip duplicate values for 'a'
            if (a > 0 && nums[a] == nums[a - 1])
                continue;

            for (int b = a + 1; b < n - 2; b++) {
                // Skip duplicate values for 'b'
                if (b > a + 1 && nums[b] == nums[b - 1])
                    continue;
                int c = b + 1;
                int d = n - 1;
                
                while (c < d) {
                    // Use long long to avoid integer overflow
                    long long sum =(long long)nums[a] + nums[b] + nums[c] + nums[d];
                    // Need larger sum
                    if (sum < target) {
                        c++;
                    }
                    // Need smaller sum
                    else if (sum > target) {
                        d--;
                    } else {
                        ans.push_back({nums[a], nums[b], nums[c], nums[d]});
                        c++;
                        d--;
                        // Skip duplicate values for 'c'
                        while (c < d && nums[c] == nums[c - 1]) {
                            c++;
                        }
                        // Skip duplicate values for 'd'
                        while (c < d && nums[d] == nums[d + 1]) {
                            d--;
                        }
                    }
                }
            }
        }
        return ans;
    }
};