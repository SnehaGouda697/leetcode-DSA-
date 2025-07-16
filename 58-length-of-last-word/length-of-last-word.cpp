class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool foundChar = false;
        int n = s.length();

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                // Start counting letters of the last word
                length++;
                foundChar = true;
            } else if (foundChar) {
                // If space found after counting, break
                break;
            }
        }

        return length;
    }
};