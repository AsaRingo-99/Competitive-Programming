#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)100
#define MAX_N (ll)1e5
#define INF (ll)1e16

int n , m ;

int main(){
  cin >> n >> m ;
  bool rel[n][n] ;

  for(int i = 0 ; i < n ; i++) fill(rel[i],rel[i]+n,false) ;
  for(int i = 0 ; i < m ; i++){
    int s , t ;
    cin >> s >> t ;
    rel[s-1][t-1] = true ;
  }

  int ans = 0 ;
  for(int i = 0 ; i < (1 << n) ; i++){
    vector<int> a ;
    bool ok = true ;
    for(int j = 0 ; j < n ; j++){
      if(i >> j & 1) a.push_back(j) ;
    }
    for(int j = 0 ; j < a.size() ; j++){
      for(int k = j + 1 ; k < a.size() ; k++){
        if(!rel[a[j]][a[k]]) ok = false ;
      }
    }
    int len = a.size() ;
    if(ok) ans = max(ans,len) ;
  }
  cout << ans << endl ;
}