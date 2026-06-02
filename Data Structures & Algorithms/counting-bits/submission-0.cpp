class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            // ans[i / 2] + 1 if i is odd, or + 0 if i is even
            ans[i] = ans[i >> 1] + (i & 1);
        }
        return ans;
    }
};