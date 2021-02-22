#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int T ;

int main(){
  cin >> T ;
  vector<ll> val ;
  for(int i = 0 ; i < T ; i++){
    ll R , L ;
    cin >> L >> R ;
    ll tmp = 2 * L ;
    if(R < tmp){
      val.push_back(0) ;
      continue ;
    }
    ll res = R - tmp + 1 ;
    ll ans = res * (res + 1) / 2 ;
    val.push_back(ans) ;
  }
  for(ll u : val) cout << u << endl ;
}