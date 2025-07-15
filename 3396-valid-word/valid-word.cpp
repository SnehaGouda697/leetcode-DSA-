class Solution {
public:
    bool isValid(string word) {
      int n = word.length();
      if(n < 3)
      {
        return false;  // here first conditon is been checked  it should contain minimum of 3 characters
      }
      int vowels = 0;
      int consonant = 0;
      string vowellist = "aeiouAEIOU";
      for(char c : word)
      {
        if(isalpha(c))
        {
            if(vowellist.find(c)!=string::npos)
            {
                vowels++;
            }
            else 
            {
               consonant++;
            }
        }
        else if(!isdigit(c))
            {
               return false;
            }
    
    }
    return vowels >= 1 && consonant >=1;

    
    }
};