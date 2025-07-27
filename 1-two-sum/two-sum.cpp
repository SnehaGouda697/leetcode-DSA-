class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       std::unordered_map<int ,int>Index;
       int n = nums.size();
       for(int i=0;i<n;i++)
       {
            int diff = target - nums[i];
            if(Index.find(diff)!=Index.end())
            {
                return{i,Index[diff]};
            }
            Index[nums[i]] = i;
       }
       return {};
    }
};