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
    ONLINE_JUDGE
    int a_max = 0, t_max= 0, g_max = 0, c_max = 0, ans = 0;
    char c;

while(cin >> c)
{
    cout << c << endl;
    while (c == 'A')
   {
       a_max += 1;
       ans = max(ans, a_max);
   }
   a_max = 0;

   while (c == 'T')
   {
       t_max += 1;
       ans = max(ans, a_max);
   }
   t_max = 0;

   while (c == 'G')
   {
       g_max += 1;
       ans = max(ans, a_max);
   }
   g_max = 0;

   while (c == 'C')
   {
       c_max += 1;
       ans = max(ans, a_max);
   }
   c_max = 0;
}

   cout << ans;

   return 0;
}
