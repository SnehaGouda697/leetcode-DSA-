class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0;
        int count = 0;
        string vowellist = "aeiou";
        
        for(int i = 0;i<k;i++)
        {
           if(vowellist.find(s[i])!=string::npos)
           {
                left++;
           }
        }
        count = left;
        for(int p = k;p<s.length();p++)
        {
            if(vowellist.find(s[p])!=string::npos)
            {
                left++;
            }
            if(vowellist.find(s[p-k])!=string::npos)
            {
                left--;
            }
            count = max(count,left);

        }
        return count;
    
    }
};