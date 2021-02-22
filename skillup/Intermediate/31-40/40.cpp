#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)1000
#define INF (ll)1e18
#define mod (ll)10000

int n , k ;

int main(){
  cin >> n >> k ;
  map<int,int> plan ;
  for(int i = 0 ; i < k ; i++){
    int s , t ;
    cin >> s >> t ;
    plan[s] = t ;
  }

  int dp[n][6] ;

  for(int i = 0 ; i < n ; i++) fill(dp[i],dp[i]+6,0) ;

  if(plan[0] == 0){
    dp[0][0] = 1 ;
    dp[0][1] = 1 ;
    dp[0][2] = 1 ;
  }
  else{
    dp[0][plan[0]-1] = 1 ;
  }
  for(int i = 0 ; i < n - 1 ; i++){
    if(plan[i+1] == 0){
      for(int j = 0 ; j < 6 ; j++){
        if(j < 3){
          for(int k = 0 ; k < 3 ; k++){
            if(k == j) continue ;
            dp[i+1][k] += dp[i][j] % mod ;
          }
          dp[i+1][j+3] += dp[i][j] % mod ;
        }
        else{
          for(int k = 0 ; k < 3 ; k++){
            if(k == j % 3) continue ;
            dp[i+1][k] += dp[i][j] % mod ;
          }    
        }
      }
    }
    else{
      for(int j = 0 ; j < 3 ; j++){
        if(j == plan[i+1] - 1) continue ;
        dp[i+1][plan[i+1]-1] += dp[i][j] % mod ;
      }
      for(int j = 0 ; j < 3 ; j++){
        if(j == plan[i+1] - 1) continue ;
        dp[i+1][plan[i+1]-1] += dp[i][j + 3] % mod ;
      }
      dp[i+1][plan[i+1]+2] += dp[i][plan[i+1]-1] % mod ;
    }
  }
  ll sum = 0 ;
  for(int u : dp[n-1]) sum += u % mod ;
  cout << sum % mod << endl ;
}