#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int a , b , c ; 

int main(){
  cin >> a >> b >> c ;
  int res = a - b ;
  if(res >= c) cout << 0 << endl ;
  else cout << c - res << endl ;
}