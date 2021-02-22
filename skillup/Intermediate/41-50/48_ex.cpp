#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N 50
#define INF (ll)1e18



int main(){
  vector<int> res ;
  while(true){
    int n ;
    cin >> n ;
    if(n == 0) break ;
    int w[n] ;
    for(int i = 0 ; i < n ; i++) cin >> w[i] ;
    int dp[MAX_N + 1][MAX_N + 1] ;
    memset(dp,0,sizeof(dp)) ;

    for(int W = 2 ; W <= n ; W++){
      for(int l = 0 ; l < n ; l++){
        int r = l + W ;
        if(r > n) continue ;
        //if(r - l == 2 && abs(w[l] - w[l+1]) <= 1) dp[l][r] = 2 ;
        if(abs(w[r-1] - w[l]) <= 1 && dp[l+1][r-1] == r - l - 2) dp[l][r] = r - l ;
        for(int mid = l + 1 ; mid < r ; mid++){
          dp[l][r] = max(dp[l][r],dp[l][mid] + dp[mid][r]) ;
        }
      }
    }
    res.push_back(dp[0][n]) ;
  }
  for(int u : res) cout << u << endl ;
}