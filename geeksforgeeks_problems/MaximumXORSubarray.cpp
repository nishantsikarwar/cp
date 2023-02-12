// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int maxSubarrayXOR(int N, int arr[])
    {
        // code here
        if (N == 0)
            return arr[0];

        int max_so_far = 0;
        int curr_max = 1;

        for (int i = 0; i < N; i++)
        {
            curr_max = max(arr[i], arr[i] ^ curr_max);

            max_so_far = max(max_so_far, curr_max);
        }

        return max_so_far;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        // int t = 1;
        // int N =1;
        // int arr[] = {2};

        Solution ob;
        cout << ob.maxSubarrayXOR(N, arr) << endl;
    }

    return 0;
}
// } Driver Code Ends