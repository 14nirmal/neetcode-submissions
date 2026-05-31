class Solution {
public:
    int maxProfit(vector<int>& a) {
        int min = a[0];
        int maxpr = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] < min) min = a[i];
            int pr = a[i] - min;
            if (pr > maxpr) maxpr = pr;
        }
        return maxpr;
    }
};