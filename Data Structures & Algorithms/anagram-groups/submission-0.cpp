class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> store;
        for(string s : strs){
            string key = s;
            sort(key.begin(),key.end());
            store[key].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto it : store){
            ans.push_back(it.second);
        }
        return ans;
    }
};
