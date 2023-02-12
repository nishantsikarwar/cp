class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {

        // int temp = nums[n-1];
        int n = nums.size();

        for (int i = 0; i < k; i++)
        {
            int temp = nums[n - 1];
            for (int j = n - 1; j > 0; j--)
            {
                nums[j] = nums[j - 1];
            }
            nums[0] = temp;
        }
    }
};

/*
Optimized Solution.
*/

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {

        int n = nums.size();
        k = k % n;
        k = n - k;
        int gcd = __gcd(k, n);

        for (int i = 0; i < gcd; i++)
        {
            int temp = nums[i];
            int j = i;

            while (true)
            {

                int l = j + k;

                if (l >= n)
                    l = l - n;

                if (l == i)
                    break;

                nums[j] = nums[l];
                j = l;
            }

            nums[j] = temp;
        }
    }
};
