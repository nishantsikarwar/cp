#include <bits/stdc++.h>
using namespace std;
#define For(i, x, y) for (int i = x; i <= y; ++i)
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define endl "\n"
#define input 3
#define vlong long long
#define ONLINE_JUDGE              \
    freopen("input", "r", stdin); \
    freopen("output", "w", stdout);

/*Trival Solution */
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if ((i == 0 || nums[i] > nums[i - 1]) && (i == n - 1 || nums[i] > nums[i + 1]))
                return i;
        }
    }
};

/*Binary Search Solution*/
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();
        int L = 0, R = n - 1;
        while (L < R)
        {
            int m = (L + R + 1) / 2;
            if (nums[m - 1] > nums[m])
            {
                R = m - 1;
            }
            else
            {
                L = m;
            }
        }
        return L;
    }
};

int main()
{
    return 0;
}