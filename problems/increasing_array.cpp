#include <bits/stdc++.h>
using namespace std;
#define For(i,x,y) for (int i = x; i <= y; ++i)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
// #define input 3
#define vlong long long 
#define ONLINE_JUDGE  freopen("input","r",stdin);freopen("output","w",stdout);

int main () 
{
    // ONLINE_JUDGE
    int n;
    cin >> n;

    long int num[n];

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    long int i = 0, steps = 0;
    while(i < n-1)
    {
        if(num[i] > num[i+1])
        {
            steps += (num[i] - num[i+1]);
            num[i+1] = num[i];
        }
        i++;
    }
    
    cout << steps;
    return 0;
}
