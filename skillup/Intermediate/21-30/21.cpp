#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)100
#define MAX_N (ll)1e5
#define INF (ll)1e16

int n ;
ll H[MAX_N] , S[MAX_N] ;


bool rec(ll x){
  int tim[n] ;
  memset(tim,0,sizeof(tim)) ;
  for(int i = 0 ; i < n ; i++){
    ll t = (x - H[i]) / S[i] ;
    if(t > n - 1) t = n - 1 ;
    if(t < 0) t = 0 ;
    tim[t]++ ;
  }
  int num = 0 ;
  bool ok = true ;
  for(int i = 0 ; i < n ; i++){
    num += tim[i] ;
    if(i + 1 < num) ok = false ;
  }
  return ok ;
}

int main(){
  cin >> n ;
  for(int i = 0 ; i < n ; i++) cin >> H[i] >> S[i] ;
  ll lef = 0 , rig = INF ;
  while(rig - lef > 1){
    ll mid = (lef + rig) / 2 ;
    if(rec(mid)) rig = mid ;
    else lef = mid ;
  }
  cout << rig << endl ;
}