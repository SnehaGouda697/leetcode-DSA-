
class Solution {
public:
    int countGoodSubstrings(string s) {
        int count = 0;

        for (int i = 0; i + 2 < s.length(); i++) {
            unordered_set<char> char_set;
            char_set.insert(s[i]);
            char_set.insert(s[i + 1]);
            char_set.insert(s[i + 2]);

            if (char_set.size() == 3) {
                count++;
            }
        }

        return count;
    }
};
