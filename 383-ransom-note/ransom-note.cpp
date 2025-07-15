class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int array[26] ={0};
        int arr[26] ={0};
        for(int i = 0;i<ransomNote.length();i++)
        {
            char ch = ransomNote[i];
            array[ch - 'a']++;
        }
        for(int j = 0;j<magazine.length();j++)
        {
            char sh = magazine[j];
            arr[sh - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (array[i] > arr[i])
                return false;
        }
        return true;

    }
};