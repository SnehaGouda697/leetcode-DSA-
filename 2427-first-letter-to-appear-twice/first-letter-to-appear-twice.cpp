class Solution {
public:
    char repeatedCharacter(string s) {
    int array[26]={0};
    for(int i = 0;i<s.length();i++)
    {
        char ch = s[i];
        array[ch - 'a']++;
    
        if(array[ch-'a']==2)
        {
            return ch;
        }
    }
    return -1;
    }
};