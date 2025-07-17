class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> m1;
        for (int i = 0; i < nums.size(); i++) {
            if (m1.find(nums[i]) != m1.end()) {
                return true; 
            }
            
            m1.insert(nums[i]);
            
            // Maintain window size k
            if (i >= k) {
                m1.erase(nums[i - k]);
            }
        }
        return false;
    }
};
