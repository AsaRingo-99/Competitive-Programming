#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N 50
#define INF (ll)1e18

int n ;

int main(){
  cin >> n ;
  int A[n] ;
  for(int i = 0 ; i < n ; i++) cin >> A[i] ;
  int dp[n] ;
  fill(dp,dp+n,-1) ;
  for(int i = 0 ; i < n ; i++){
    int j = lower_bound(dp,dp+n,A[i]) - dp ;
    dp[j-1] = A[i] ;
  }
  int res = 0 ;
  for(int i = 0 ; i < n ; i++)
    if(dp[i] != -1) res++ ;
  cout << res << endl ;
}