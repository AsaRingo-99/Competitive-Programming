#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)100
#define MAX_N (ll)30
#define INF (ll)1e16

int d , n , m ;

int main(){
  cin >> d >> n >> m ;
  int store[n + 1] ;
  int customer[m] ;
  store[0] = 0 ;
  store[n] = d ;
  for(int i = 1 ; i < n ; i++) cin >> store[i] ;
  for(int i = 0 ; i < m ; i++) cin >> customer[i] ;
  sort(store,store+n+1) ;
  ll res = 0 ;
  for(int i = 0 ; i < m ; i++){
    auto ind = lower_bound(store,store+n+1,customer[i]) ;
    if(*ind != customer[i]){
      int s = *ind - customer[i] ;
      ind-- ;
      int t = customer[i] - *ind ;
      res += min(s,t) ;
    }
  }
  cout << res << endl ;
}