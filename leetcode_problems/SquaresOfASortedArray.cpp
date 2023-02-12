class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {

        vector<int> squared_nums;

        for (int x : nums)
        {
            squared_nums.push_back(x * x);
        }

        sort(squared_nums.begin(), squared_nums.end());
        return squared_nums;
    }
};

/*
Optimized Solution
*/

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {

        int len = nums.size();
        int k = 0;

        for (int k = 0; k < len; k++)
        {
            if (nums[k] > 0)
                break;
        }

        int i = k - 1;
        int j = k;

        vector<int> temp;
        while (i >= 0 && j < len)
        {
            if (nums[i] * nums[i] < nums[j] * nums[j])
            {
                temp.push_back(nums[i] * nums[i]);
                i--;
            }
            else
            {
                temp.push_back(nums[j] * nums[j]);
                j++;
            }
        }

        while (i >= 0)
        {
            temp.push_back(nums[i] * nums[i]);
            i--;
        }
        while (j < len)
        {
            temp.push_back(nums[j] * nums[j]);
            j++;
        }
        return temp;
    }
};