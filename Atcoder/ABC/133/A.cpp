#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n , a , b ;

int main(){
  cin >> n >> a >> b ;
  if(n * a < b) cout << n * a << endl ;
  else cout << b << endl ;
}