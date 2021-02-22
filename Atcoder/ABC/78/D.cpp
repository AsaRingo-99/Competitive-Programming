#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

ll n , z , w ;

int main(){
  cin >> n >> z >> w ;
  ll a[n] ;
  for(int i = 0 ; i < n ; i++) cin >> a[i] ;
  ll ans ;
  if(n == 1) ans = abs(a[n-1] - w) ;
  else ans = max(abs(a[n-1] - a[n-2]) , abs(a[n-1] - w)) ;
  cout << ans << endl ;
}