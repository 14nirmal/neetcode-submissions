class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int j=1;
        for( j;j<=n;j++){
            if(auto it = mp.find(j) == mp.end()){
                break;
            }
        }
        return j;
    }
};