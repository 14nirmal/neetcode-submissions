class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        unordered_map<int,int>cnt;
        for(int i=0;i<n;i++){
            cnt[nums[i]]++;
        }
        for (auto const& [element, count] : cnt) {
            if (count > n / 3) {
                ans.push_back(element);
            }
        }
        return ans;
    }
};