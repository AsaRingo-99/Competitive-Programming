#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define INF (ll) 1e18

int A , B , Q ;

int main(){
  cin >> A >> B >> Q ;
  vector<ll> s(A+2) , t(B+2) ;
  ll x[Q] ;
  s[0] = -1 * INF ; t[0] = -1 * INF ;
  s[A+1] = INF ; t[B+1] = INF ;
  for(int i = 1 ; i <= A ; i++) cin >> s[i] ;
  for(int i = 1 ; i <= B ; i++) cin >> t[i] ;
  for(int i = 1 ; i <= Q ; i++) cin >> x[i] ;
  sort(s.begin(),s.end()) ;
  sort(t.begin(),t.end()) ;

  vector<ll> ans ;
  for(int i = 0 ; i < Q ; i++){
    ll tmp = INF ;
    int res = lower_bound(s.begin(),s.end(),x[i]) - s.begin() ;
    int pes = lower_bound(t.begin(),t.end(),x[i]) - t.begin() ;
    for(int j = 0 ; j < 2 ; j++){
      for(int k = 0 ; k < 2 ; k++){
        ll r = abs(s[res - j] - t[pes - k]) + min(abs(s[res - j] - x[i]) , abs(t[pes - k] - x[i])) ;
        tmp = min(tmp,r) ;
      }
    }
    ans.push_back(tmp) ;
  }
  
  for(ll u : ans) cout << u << endl ;
}