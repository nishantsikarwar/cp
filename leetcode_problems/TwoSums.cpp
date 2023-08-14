class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> hashset;

        for (int i = 0 ; i < nums.size() ; i ++)
        {
            int complement = target - nums[i];
            if (hashset.find(complement) != hashset.end())
            {
                return {hashset[complement], i};
            }
            hashset[nums[i]] = i;
        }
        
    }
};