class Solution {
   public:
    string encode(vector<string>& strs) {
        string encoded = "";
        for (string s : strs) {
            encoded += to_string(s.size()) + '#';
            for (char ch : s) {
                encoded += ch + 1;
            }
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int len = stoi(s.substr(i, j - i));
            j++;
            string temp = "";
            for (int k = 0; k < len; k++) {
                temp += s[j + k] - 1;
            }
            res.push_back(temp);
            i = j + len;
        }
        return res;
    }
};
