#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

ll n , m ;

int main(){
  cin >> n >> m ;
  ll tmp = 1 ;
  for(int i = 0 ; i < m ; i++) tmp *= 2 ;
  cout << ( m * 1900 + (n - m) * 100 ) * tmp << endl ;
}