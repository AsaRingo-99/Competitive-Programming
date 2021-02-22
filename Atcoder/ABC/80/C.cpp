#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define INF (ll)1e12

int n ;

int main(){
  cin >> n ;
  bool F[n][10] ;
  ll P[n][11] ;
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < 10 ; j++){
      int f ; cin >> f ;
      if(f == 1) F[i][j] = true ;
      else F[i][j] = false ;
    }
  }

  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < 11 ; j++) cin >> P[i][j] ;
  }

  ll benefit = -1 * INF ;
  for(int i = 1 ; i < (1 << 10) ; i++){
    bool fit[10] ;
    for(int j = 0 ; j < 10 ; j++){
      if(i >> j & 1) fit[j] = true ;
      else fit[j] = false ;
    }
    int count[n] ;
    fill(count,count+n,0) ;
    for(int j = 0 ; j < n ; j++){
      for(int k = 0 ; k < 10 ; k++){
        if(fit[k] && F[j][k]) count[j]++ ;
      }
    }
    ll ben = 0 ;
    for(int j = 0 ; j < n ; j++){
      ben += P[j][count[j]] ;
    }
    benefit = max(benefit,ben) ;
  }
  cout << benefit << endl ;
}