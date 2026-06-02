class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        // Loop as long as there are digits left to process OR a carry remains
        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;

            if (i >= 0) {
                sum += a[i] - '0'; // Convert char to int
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0'; // Convert char to int
                j--;
            }

            // Determine the character to add and the new carry
            result += to_string(sum % 2);
            carry = sum / 2;
        }

        // Since we added digits from right to left, the result is backwards
        reverse(result.begin(), result.end());
        return result;
    }
};