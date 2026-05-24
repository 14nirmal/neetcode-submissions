class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n = a.size();
        int i = 0,j=n-1;
        while(i<j){
            if(a[i]+a[j]<target){
                i++;
            }
            else if(a[i]+a[j]>target){
                j--;
            }
            else{
                return {i+1,j+1};
            }
        }
        return {-1,-1};
    }
};