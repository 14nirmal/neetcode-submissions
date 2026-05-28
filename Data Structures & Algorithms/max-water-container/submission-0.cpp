class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int i=0,j=n-1;
        while(i<j){
            int mn = min(height[i],height[j]);
            ans = max(ans,(mn)*(j-i));
            if(mn == height[i]){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};