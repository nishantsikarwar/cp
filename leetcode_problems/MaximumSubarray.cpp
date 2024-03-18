class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.empty()) return 0;

    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        // At each step, add the current number to the currentSum,
        // or start a new subarray from the current number, whichever is larger.
        currentSum = max(nums[i], currentSum + nums[i]);
        // Update maxSum if currentSum is greater than maxSum.
        maxSum = max(maxSum, currentSum);
    }

        return maxSum;
    }
};