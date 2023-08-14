class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set<int> hashset;
        for (int i = 0 ; i < nums.size() ; i ++)
        {
            
            hashset.insert(nums[i]);
        }
    
        return nums.size() != hashset.size();
    }

};