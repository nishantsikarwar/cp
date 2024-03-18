class Solution {
public:
    #include <unordered_map>

    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> hashSet;

        for (int i = 0 ; i < nums.size() ; i ++)
        {
            int complement = target - nums[i];
            if (hashSet.find(complement) != hashSet.end())
            {
                return {hashSet[complement], i};
            }
            hashSet[nums[i]] = i;
        }
        return {};
    }
};