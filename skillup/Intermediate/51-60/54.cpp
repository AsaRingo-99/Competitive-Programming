#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef pair<ll,int> P ;
#define MAX_M (ll)100
#define MAX_N 300
#define INF (ll)1e5

int n ;

int main(){
  cin >> n ;
  int c[n] ;
  for(int i = 0 ; i < n ; i++) cin >> c[i] ;
  ll dp[n] ;
  fill(dp,dp+n,INF) ;
  for(int i = 0 ; i < n ; i++){
    int x = lower_bound(dp,dp+n,c[i]) - dp ;
    dp[x] = c[i] ;
  }
  int rem = 0 ;
  for(int i = 0 ; i < n ; i++){
    if(dp[i] == INF) rem++ ;
  }
  cout << n - 1 - rem << endl ;
}