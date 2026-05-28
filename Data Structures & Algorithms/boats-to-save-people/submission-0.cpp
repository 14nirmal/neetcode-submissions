#include <vector>
#include <algorithm>

class Solution {
public:
    int numRescueBoats(std::vector<int>& people, int limit) {
        // Step 1: Sort the weights of the people
        std::sort(people.begin(), people.end());
        
        int boats = 0;
        int i = 0;                     
        int j = people.size() - 1;     
        
        // Step 2: Use two pointers to pair people up
        while (i <= j) {
            // If the lightest and heaviest person can share a boat
            if (people[i] + people[j] <= limit) {
                i++; // Lightest person gets on the boat
            }
            // The heaviest person always gets a boat
            j--; 
            boats++; // Increment boat count
        }
        
        return boats;
    }
};