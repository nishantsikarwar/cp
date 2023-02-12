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

vector<pair<int, int>> pairs;

bool ok(int x, int y)
{
    for (pair<int, int> p : pairs)
    {
        if (p.first != x && p.first != y && p.second != x && p.second != y)
            return false;
    }
    return true;
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        pairs.emplace_back(a, b);
    }

    for (int x : {pairs[0].first, pairs[0].second})
    {
        if (ok(x, -1))
        { // maybe x is enough
            puts("YES");
            return 0;
        }

        for (int i = 1; i < m; i++)
        {
            if (pairs[i].first != x && pairs[i].second != x)
            {
                // y must be the element of pairs[i]
                if (ok(x, pairs[i].first) || ok(x, pairs[i].second))
                {
                    puts("YES");
                    return 0;
                }
                break; // prevents from O(M^2) complexity
            }
        }
    }

    puts("NO");
}