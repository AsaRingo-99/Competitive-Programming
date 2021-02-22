#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int a , b , c , d ;

int main(){
  cin >> a >> b >> c >> d ;
  int start = a ;
  if(a < c) start = c ;
  int fin = b ;
  if(b > d) fin = d ;

  if(fin - start <= 0) cout << 0 << endl ;
  else cout << fin - start << endl ;
}