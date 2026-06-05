class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans = x;
        long long remaining = n - 1;
        
        // Iterate through each bit position
        for (int i = 0; i < 62; ++i) {
            // If the i-th bit of x is 0, it's a free slot
            if (((ans >> i) & 1) == 0) {
                // Take the lowest bit of remaining and put it here
                ans |= (remaining & 1) << i;
                // Shift remaining to process its next bit
                remaining >>= 1;
            }
            // If remaining becomes 0, we've placed all necessary bits
            if (remaining == 0) break;
        }
        
        return ans;
    }
};