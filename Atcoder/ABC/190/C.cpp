#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n , m , k ;

int main(){
  cin >> n >> m ;
  bool dish[n] ;
  fill(dish,dish+n,false) ;
  pair<int,int> P[m] ;
  for(int i = 0 ; i < m ; i++) cin >> P[i].first >> P[i].second ; 
  cin >> k ;
  int CD[k][2] ;
  for(int i = 0 ; i < k ; i++) cin >> CD[i][0] >> CD[i][1] ;

  int res = 0 ;

  for(int i = 0 ; i < (1 << k) ; i++){
    fill(dish,dish+n,false) ;
    //for(int i = 0 ; i < n ; i++) cout << dish[i] << " " ;
    //cout << endl ;
    for(int j = 0 ; j < k ; j++){
      if(i >> j & 1) dish[CD[j][0] - 1] = true ;
      else dish[CD[j][1] - 1] = true ;
    }
  
    //for(int i = 0 ; i < n ; i++) cout << dish[i] << " " ;
    //cout << endl ;
    
    int cnt = 0 ;

    for(int j = 0 ; j < m ; j++){
      if( dish[P[j].first - 1] && dish[P[j].second - 1] ) cnt++ ;
    }
    //cout << cnt << endl ;
    res = max(res,cnt) ;
    
  }
  cout << res << endl ;
}