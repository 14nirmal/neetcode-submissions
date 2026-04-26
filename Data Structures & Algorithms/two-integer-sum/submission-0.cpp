class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> preMap;
        for(int i=0;i<n;i++){
            int dif = target - nums[i];
            if(preMap.find(dif) != preMap.end()){
                return {preMap[dif],i};
            }
            preMap.insert({nums[i],i});
        }
        return {};
    }
};
