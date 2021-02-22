#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int p , q , r ;

int main(){
  cin >> p >> q >> r ;
  cout << min(p + q , min(q + r , p + r)) ;
}