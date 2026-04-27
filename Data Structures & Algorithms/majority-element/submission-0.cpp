class Solution {
public:
    int majorityElement(vector<int>& a) {
        int n=a.size();
        int ans=0,cnt=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                ans=a[i];
            }
            if(ans==a[i]){ 
                cnt++;
            }else{
                cnt--;
            }
        }
        return ans;
    }
};