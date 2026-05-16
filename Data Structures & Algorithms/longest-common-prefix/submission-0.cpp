class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";
        string ans = strs[0];
        int n = strs.size();
        int l = ans.size();
        for (int j = 1; j < n; j++) {
            int k = 0;
            int max_possible_match = min((int)strs[j].size(), l);
            for (int i = 0; i < max_possible_match; i++) {
                if (strs[j][i] == ans[i]) {
                    k++;
                } else {
                    break;
                }
            }
            l = min(k, l);
        }
        return ans.substr(0, l);
    }
};