#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;

int n ;
string S ;

int main(){
  cin >> n >> S ;
  int dp[n+1][n+1] ;
  memset(dp,0,sizeof(dp)) ;
  int res = 0 ;
  for(int i = 1 ; i < n + 1 ; i++){
    for(int j = i + 1 ; j < n + 1 ; j++){
      if(S[i-1] == S[j-1]){
        if(dp[i-1][j-1] + 1 <= j - i) dp[i][j] = dp[i-1][j-1] + 1 ;
        res = max(res,dp[i][j]) ;
      }
    }
  }
  cout << res << endl ;
}