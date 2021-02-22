#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)100
#define MAX_N (ll)1e5
#define INF (ll)1e16

int n , m ;

int main(){
  cin >> n >> m ;
  vector<int> s[m] ;
  int p[m] ;
  for(int i = 0 ; i < m ; i++){
    int k ;
    cin >> k ;
    for(int j = 0 ; j < k ; j++){
      int t ;
      cin >> t ;
      s[i].push_back(t-1) ;
    }
  }
  for(int i = 0 ; i < m ; i++) cin >> p[i] ;

  bool swc[n] ;
  int sum = 0 ;
  for(int i = 0 ; i < (1 << n) ; i++){
    fill(swc,swc+n,false) ;
    for(int j = 0 ; j < n ; j++){
      if(i >> j & 1) swc[j] = true ;
    }
    bool ok = true ;
    for(int j = 0 ; j < m ; j++){
      int count = 0 ;
      for(int u : s[j]){
        if(swc[u]) count++ ;
      }
      if(count % 2 != p[j]) ok = false ;
    }
    if(ok) sum++ ;
  }
  cout << sum << endl ;
}