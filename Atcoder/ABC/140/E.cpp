#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int n ;

int main(){
  //入力
  cin >> n ;
  ll P[n+1] ;
  for(int i = 1 ; i <= n ; i++) cin >> P[i] ;

  //前処理
  set<int> Add = {0,n+1} ;
  int Ind[n+1] ; //インデックス記憶
  for(int i = 1 ; i <= n ; i++) Ind[P[i]] = i ;

  //解く
  ll res = 0 ;
  for(ll i = n ; i >= 1 ; i--){
    auto itr = Add.lower_bound(Ind[i]) ;
    ll right1 = *itr , right2 = n + 1 , left1 = 0 , left2 = 0 ;
    if(right1 < n + 1){
      itr++ ;
      right2 = *itr ;
      itr-- ;
    }
    itr-- ;
    left1 = *itr ;
    if(left1 > 0){
      itr-- ;
      left2 = *itr ;
    }
    res += i * ( (right1 - Ind[i]) * (left1 - left2) + (Ind[i] - left1) * (right2 - right1) ) ;
    Add.insert(Ind[i]) ;
  }
  cout << res << endl ;
}