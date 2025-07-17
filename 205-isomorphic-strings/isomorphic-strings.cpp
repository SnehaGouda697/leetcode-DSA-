class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> p1 ,p2;
        for(int i = 0;i<s.length();i++)
        {
            if(p1.find(s[i]) == p1.end())
            {
               p1[s[i]] = i;
            }
            if(p2.find(t[i]) == p2.end())
            {
                p2[t[i]] = i;
            }
            if(p1[s[i]] != p2[t[i]])
            {
                return false;
            }
            
            
        }
        return true;
        
        
    }
};
