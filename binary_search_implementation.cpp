#include <bits/stdc++.h>
using namespace std;
#define For(i,x,y) for (int i = x; i <= y; ++i)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 998244353
#define vlong long long 
#define ONLINE_JUDGE  freopen("input","r",stdin);freopen("output","w",stdout);


int main () {
 int n; 
 scanf("%d", &n);
 int a[n];
 for( int  i  = 0; i < n; i++) {
     scanf("%d", &a[i]);
 }
  /* Binary Search*/
  int L = 0, R = n - 1, target;
   scanf("%d", &target);
    while (L <= R){
      int mid = L + (R - L)/2;
      if(a[mid] == target) {
          cout << a[mid] << endl ;
          return 0;
      }
      else if (a[mid] < target) {
          L = mid+1;
      }
      else {
          R = mid - 1;
      }

    }
    cout << "Not Found" << endl;
    return 0;
}