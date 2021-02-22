#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using Gragh = vector<vector<char>> ;
using P = pair<int,int> ;
using ll = long long ;
#define mod 998244353

int n , k ;

int main(){
  cin >> n >> k;
  ll dpsum[n+1]; dpsum[0] = 0; dpsum[1] = 1;
  ll dp[n+1]; 
  memset(dp,0,sizeof(dp));
  dp[1] = 1;
  pair<int,int> sec[k];
  for(int i = 0 ; i < k ; i++) cin >> sec[i].first >> sec[i].second;
  for(int i = 2 ; i < n + 1 ; i++){
    for(int j = 0 ; j < k ; j++){
      int l , r ;
      l = max(1,i-sec[j].second) ;
      r = max(0,i-sec[j].first) ;
      dp[i] += (dpsum[r] - dpsum[l-1] + mod) % mod ;
    }
    dpsum[i] = (dpsum[i-1] + dp[i]) % mod ;
  }
  cout << dp[n] % mod << endl ;
}