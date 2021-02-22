#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)1000
#define INF (ll)1e18

int n ;

int main(){
  cin >> n;
  ll A[n+1]; A[0] = 0;
  for(int i = 1 ; i <= n ; i++){
    ll a ;
    cin >> a ;
    A[i] = A[i-1] + a ;
  }
  ll ans[n] ;
  memset(ans,0,sizeof(ans)) ;
  for(int i = 0 ; i <= n ; i++){
    for(int j = i + 1 ; j <= n ;j++){
      ans[j-i-1] = max(ans[j-i-1],A[j]-A[i]) ;
    }
  }
  for(ll u : ans)cout << u << endl ;
}