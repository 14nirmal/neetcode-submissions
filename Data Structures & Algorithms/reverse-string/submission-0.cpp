class Solution {
public:
    void reverseString(vector<char>& s) {
        int k = s.size()-1;
        int i=0;
        while(i<k){
            int temp = s[i];
            s[i] = s[k];
            s[k] = temp;
            i++;
            k--;
        }
    }
};