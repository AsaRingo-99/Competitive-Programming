#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

ll l , r ;

int main(){
  cin >> l >> r ;
  ll la = l / 2019 ;
  ll ra = r / 2019 ;
  ll lp = l % 2019 ;
  ll rp = r % 2019 ;
  if(la < ra){
    cout << 0 << endl ;
    return 0 ;
  }
  int sum = 2019 ;
  for(int i = lp ; i < rp ; i++){
    for(int j = lp + 1 ; j <= rp ; j++){
      sum = min(sum,(i*j)%2019) ;
    }
  }
  cout << sum << endl ;
}