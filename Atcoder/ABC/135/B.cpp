#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n ;

int main(){
  cin >> n ;
  int p[n] , q[n] ;
  for(int i = 0 ; i < n ; i++){
    int s ;
    cin >> s ;
    p[i] = s ; q[i] = s ;
  }
  sort(q,q+n) ;
  int count = 0 ;
  for(int i = 0 ; i < n ; i++){
    if(p[i] != q[i]) count++ ;
  }
  if(count == 2 || count == 0) cout << "YES" << endl ;
  else cout << "NO" << endl ;
}
