#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

ll n , x ;

int main(){
  cin >> n >> x ;
  ll alc = 0 ;
  int ans = 0 ;
  for(int i = 0 ; i < n ; i++){
    ll V , P ;
    cin >> V >> P ;
    alc += V * P ;
    if(alc > x * 100){
      ans = i + 1 ;
      break ;
    }
  }
  if(ans == 0) cout << -1 << endl ;
  else cout << ans << endl ;
}