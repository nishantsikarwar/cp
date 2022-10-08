class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                continue;
            if (i == 1)
            {
                nums[i] = max(nums[i], nums[i-1]);
                continue;
            }
            nums[i] = max(nums[i-1], nums[i] + nums[i-2]);
        }
        
    }
};