#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n , m ;

int main(){
  cin >> n >> m ;
  map<int,bool> a ;
  bool ok = false ;
  for(int i = 0 ; i < m ; i++){
    int s , t ;
    cin >> s >> t ;
    if(s == 1 && a[t]) ok = true ;
    if(t == n && a[s]) ok = true ;
    if(s == 1) a[t] = true ;
    if(t == n) a[s] = true ;
  }
  if(ok) cout << "POSSIBLE" << endl ;
  else cout << "IMPOSSIBLE" << endl ;
}