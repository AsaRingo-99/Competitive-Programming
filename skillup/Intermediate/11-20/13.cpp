#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)200
#define MAX_N (ll)1000
#define INF (ll)1e16

int n , m ;

int main(){
  cin >> n >> m ;
  int A[n][m] ;
  int B[n][m] ;
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
      cin >> A[i][j] ;
    }
  }

  ll ans = 0 ;

  for(int i = 0 ; i < (1 << n) ; i++){

    for(int j = 0 ; j < n ; j++){
      for(int k = 0 ; k < m ; k++){
        B[j][k] = A[j][k] ;
      }
    }


    for(int j = 0 ; j < n ; j++){
      if(i >> j & 1){
        for(int k = 0 ; k < m ; k++){
          if(B[j][k] == 1) B[j][k] = 0 ;
          else B[j][k] = 1 ;
        }
      }
    }

    ll tmp = 0 ;
    for(int j = 0 ; j < m ; j++){
      ll c1 = 0 , c2 = 0 ; 
      for(int k = 0 ; k < n ; k++){
        if(B[k][j] == 1) c1++ ;
        else c2++ ;
      }
      tmp += max(c1,c2) ;
    }
    ans = max(tmp,ans) ;
  
  }
  cout << ans << endl ;
}