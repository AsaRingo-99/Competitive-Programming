#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using Gragh = vector<vector<char>> ;
using P = pair<int,int> ;
using ll = long long ;

int main(){
  int n , x , m ;
  cin >> n >> x >> m ;
  int ans = x ;
  for(int i = 0 ; i < n ; i++){
    x = ans ;
    ans = ans + ((x * x) % m) ;
  }
  cout << ans << endl ;
}
