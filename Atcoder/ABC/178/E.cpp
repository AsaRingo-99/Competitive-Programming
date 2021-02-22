#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;

int main(){
  int m ;
  cin >> m ;
  int x[m] , y[m] ;
  for(int i = 0 ; i < m ; i++) cin >> x[i] >> y[i] ;
  sort(x,x+m) ;
  sort(y,y+m) ;
  int X = abs(x[m-1] - x[0]) ;
  int Y = abs(y[m-1] - y[0]) ;
  cout << X + Y << endl ;
}