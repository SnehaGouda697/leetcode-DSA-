class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int max_length = 0;
        unordered_set<char>char_set;
        for(int i = 0;i<s.length();i++)
        {
           while(char_set.find(s[i])!=char_set.end())
           {
                char_set.erase(s[left]);
                left++;
           }
        
        char_set.insert(s[i]);
        max_length = max(max_length,i-left+1);
        }
        return max_length;
    }
};