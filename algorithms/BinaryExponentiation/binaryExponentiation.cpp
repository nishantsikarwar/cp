#include <bits/stdc++.h>
#include <initializer_list>
#include <vector>
using namespace std;
#define For(i, x, y) for (int i = x; i <= y; ++i)
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define endl "\n"
#define MOD 998244353
#define vlong long long
#define ONLINE_JUDGE              \
    freopen("input", "r", stdin); \
    freopen("output", "w", std out);

/*
The final complexity of this algorithm is O(log⁡ n): we have to compute log n powers of  a, and then have to do at most
log n multiplications to get the final answer from them.

The following recursive approach expresses the same idea:
First the recursive approach, which is a direct translation of the recursive formula:


*/

vlong binaryExponentiation(vlong a, vlong n)
{
    if (n == 0)
        return 1;

    vlong result = binaryExponentiation(a, n / 2);

    if (n % 2)
        return result = result * result * a;
    else
        return result = result * result;
}

int main()
{

    vlong a, n;
    cin >> a >> n;

    cout << "First Approach = " << binaryExponentiation(a, n) << endl;

    /*The second approach accomplishes the same task without recursion. It computes all the powers in a loop, and multiplies the ones with the corresponding set bit in n
  . Although the complexity of both approaches is identical, this approach will be faster in practice since we don't have the overhead of the recursive calls.*/

    vlong result = 1;
    while (n > 0)
    {
        if (n & 1)
            result = result * a % MOD;
        a = a * a % MOD;
        n >>= 1;
    }

    cout << "Second Approach = " << result << endl;
}