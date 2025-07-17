class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>m1;
        for(int i = 0;i<nums.size();i++)
        {
            if(m1.find(nums[i]) != m1.end())
            {
                return true;
            }
            m1.insert(nums[i]);
           
        }
        return false;
    }
};




