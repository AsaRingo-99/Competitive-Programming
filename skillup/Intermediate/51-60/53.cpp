#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N 50
#define INF (ll)1e18

int n ;

int main(){
  cin >> n ;
  int a[n] ;
  for(int i = 0 ; i < n ; i++) cin >> a[i] ;

  int dp[n] ;
  fill(dp,dp+n,1) ;

  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < i ; j++){
      if(a[i] > a[j]){
        dp[i] = max(dp[i],dp[j] + 1) ;
      }
    }
  }
  int res = 0 ;
  for(int u : dp) res = max(res,u) ;
  cout << res << endl ;
}