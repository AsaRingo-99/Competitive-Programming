#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

ll a , b ;

int main(){
  cin >> a >> b ;
  if(abs(a-b) % 2 == 1) cout << "IMPOSSIBLE" << endl ;
  else cout << (a + b) / 2 << endl ;
}