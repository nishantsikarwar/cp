class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nums_set(nums.begin(), nums.end());
        int maxLen = 0;

        for(int num : nums_set) {
            // Check if it's the start of a sequence
            if(nums_set.find(num - 1) == nums_set.end()) {
                int currentNum = num;
                int currentLen = 1;

                while(nums_set.find(currentNum + 1) != nums_set.end()) {
                    currentLen++;
                    currentNum++;
                }
                maxLen = max(maxLen, currentLen);
            }
        }
        return maxLen;
    }
};