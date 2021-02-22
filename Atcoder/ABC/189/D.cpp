#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int N ;

int main(){
  cin >> N ;
  string S[N] ;
  for(int i = 0 ; i < N ; i++) cin >> S[i] ;
  ll dp[N+1][2] ;

  dp[0][0] = 1 ;
  dp[0][1] = 1 ;

  for(int i = 1 ; i < N + 1 ; i++){
    if(S[i-1][0] == 'A'){
      dp[i][0] = 2 * dp[i-1][0] + dp[i-1][1] ;
      dp[i][1] = dp[i-1][1] ;
    }
    else{
      dp[i][0] = dp[i-1][0] ;
      dp[i][1] = dp[i-1][0] + 2 * dp[i-1][1] ;
    }
  }
  //for(int i = 0 ; i < N ; i++) cout << dp[i][0] << " " << dp[i][1] << endl ;
  cout << dp[N][1] << endl ;
}