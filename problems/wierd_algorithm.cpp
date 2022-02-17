#include <bits/stdc++.h>
using namespace std;
// #define For(i,x,y) for (int i = x; i <= y; ++i)
// #define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// #define endl "\n"
// #define input 3
// #define vlong long long 
// #define ONLINE_JUDGE  freopen("input","r",stdin);freopen("output","w",stdout);

int main () 
{
    long int n;
    cin >> n;

    while(n > 1)
    {
        cout << n << " ";
        if(n%2 == 0)
            n /= 2;
        else
        n = 3*n + 1;
    }

    cout << 1;
    return 0;
}