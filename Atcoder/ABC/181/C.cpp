#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main(){
  int n ;
  cin >> n ;
  int x[n] , y[n] ;
  bool ans = false ;
  for(int i = 0 ; i < n ; i++){
    cin >> x[i] >> y[i] ;
  }
  for(int i = 0 ; i < n ; i++){
    for(int j = i + 1 ; j < n ; j++){
      int dx , dy ;
      dx = x[j] - x[i] ;
      dy = y[j] - y[i] ;
      int d = gcd(dx , dy) ;
      dx = dx / d ;
      dy = dy / d ;
      for(int k = 0 ; k < n ; k++){
        if(k == i || k == j) continue ;
        if((dx == 0 && dx == x[k] - x[i]) || (dy == 0 && y[k] - y[i] == 0)){
          ans = true ;
          break ;
          }
        int syou = (x[k] - x[i]) / dx ;
        if(dx != 0 && dy != 0 && (x[k] - x[i]) % dx == 0 && y[k] == syou * dy + y[i]) ans = true ;
        
      }
    }
  }
  if(ans) cout << "Yes" << endl ;
  else cout << "No" << endl ;
}