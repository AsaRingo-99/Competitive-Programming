#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)1000
#define INF (ll)1e18

int n ;

int main(){
  cin >> n ;
  vector<int> ans ;
  for(int i = 0 ; i < n ; i++){
    string S , T ;
    cin >> S >> T ;
    int dp [S.size()+1][T.size()+1] ;
    for(int i = 0 ; i < S.size() + 1 ; i++) dp[i][0] = 0 ;
    for(int i = 0 ; i < T.size() + 1 ; i++) dp[0][i] = 0 ;

    for(int i = 1 ; i < S.size() + 1 ; i++){
      for(int j = 1 ; j < T.size() + 1 ; j++){
        if(S[i-1] == T[j-1]) dp[i][j] = max(dp[i-1][j-1] + 1,max(dp[i-1][j],dp[i][j-1])) ;
        else dp[i][j] = max(dp[i-1][j],dp[i][j-1]) ;
      }
    }
    ans.push_back(dp[S.size()][T.size()]) ;
  }
  for(int u : ans) cout << u << endl ;
}