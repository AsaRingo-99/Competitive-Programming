#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int x , y , z ;

int main(){
  cin >> x >> y >> z ;
  int t = y + z ;
  int ans = x / t ;
  if(x % t < z) ans -= 1 ;
  cout << ans << endl ;
}