#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int a , b , c ;

int main(){
  cin >> a >> b >> c ;
  if(a == b) cout << c << endl ;
  else if(b == c) cout << a << endl ;
  else cout << b << endl ;
}