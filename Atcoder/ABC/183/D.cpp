#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define INF 1000000

int n ;
ll w ;

int main(){
  cin >> n >> w ;
  ll sim[(ll)2e5+1] ;
  memset(sim,0,sizeof(sim)) ;
  for(int i = 0 ; i < n ; i++){
    int s , t ;
    ll p ;
    cin >> s >> t >> p ;
    sim[s] += p ;
    sim[t] += -p ;
  }
  ll water = 0 ;
  bool ok = true ;
  for(int i = 0 ; i < (ll)2e5 + 1 ; i++){
    water += sim[i] ;
    if(water > w) ok = false ;
  }
  if(ok) cout << "Yes" << endl ;
  else cout << "No" << endl ;
}