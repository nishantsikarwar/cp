class Solution {
public:
    int solve(vector<int>& nums)
    {
        vector<int> dp(nums.size() , -1);
        dp[0] = nums[0];
        for(int i = 1 ; i<nums.size() ; i++)
        {
            int pick = nums[i];
            if(i>1) pick = nums[i]+dp[i-2];
            int notpick = INT_MIN;
            if(i>0) notpick = dp[i-1];
            dp[i] = max(pick , notpick);
        }
        return dp[nums.size()-1];
    }
    int rob(vector<int>& nums) {
        if(nums.size() ==1) return nums[0];
        vector<int> nums1(nums.size()-1);
        vector<int> nums2(nums.size()-1);
        for(int i = 0 ; i<nums.size()-1 ; i++)
        {
            nums1[i] = nums[i];
        }
        int k = 0;
        for(int i = 1 ; i<nums.size() ; i++)
        {
            nums2[k++] = nums[i];
        }
        int n1 = solve(nums1);
        int n2 = solve(nums2);
        return max(n1 , n2);
    }
};