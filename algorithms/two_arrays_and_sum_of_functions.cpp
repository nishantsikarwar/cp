#include <bits/stdc++.h>
using namespace std;
#define For(i,x,y) for (int i = x; i <= y; ++i)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 998244353
#define vlong long long 
#define ONLINE_JUDGE  freopen("input","r",stdin);freopen("output","w",stdout);
/*
Using this approach 
 a<= A && b <= B
 then  a*B + b*A <=a*b + A*B
 club small numbers with the big number not small togather and big togather...

 For the given problem we can use the
  we need to rearange and minimize this... 
    Σ1 to N(ai*b)*i*(n-i+1)  
*/
int main () {
    int n;
    scanf("%d", &n);

    vector<long long> a(n);

    for ( int i = 0; i < n; i++){
        scanf("%I64d", &a[i]);
        a[i] = a[i]*(i+1)*(n-i);
        /* dont apply modulo because the sort would be incorrect.!*/
    }

    vector<int> b(n);
    for ( int i = 0; i < n; i++){
        scanf("%lld", &b[i]);
    }

    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());

    int ans = 0;
    for ( int i = 0; i < n; i++) {
        a[i]%= MOD;
        ans = (ans + a[i]*b[i])%MOD;
    }

    printf("%d\n", ans);
}