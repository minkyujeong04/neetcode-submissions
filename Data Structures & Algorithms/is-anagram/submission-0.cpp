#include <string>
#include <vector> // Required for std::vector
#include <numeric> // Required for std::accumulate (if used for final check, though a loop is more common)
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        // 1. Length Check
        if (s.length() != t.length()) {
            return false;
        }

        // 2. Frequency Array Initialization (for lowercase English letters 'a' through 'z')
        vector<int> char_counts(26, 0); 

        // 3. Process Both Strings
        for (int i = 0; i < s.length(); ++i) {
            char_counts[s[i] - 'a']++; // Increment count for character from 's'
            char_counts[t[i] - 'a']--; // Decrement count for character from 't'
        }

        // 4. Verify Frequencies
        // If all counts are zero, they are anagrams.
        for (int count : char_counts) {
            if (count != 0) {
                return false; // Found a character with unequal frequency
            }
        }

        // 5. Result
        return true; // All counts were zero, so they are anagrams
    }
};