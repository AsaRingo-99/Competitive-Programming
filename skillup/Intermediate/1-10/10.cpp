#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)200
#define MAX_N (ll)1000
#define INF (ll)1e7

int n , q ;

int main(){
  cin >> n ;
  int A[n] ;
  for(int i = 0 ; i < n ; i++) cin >> A[i] ;
  cin >> q ;

  int m[q] ;
  bool ok[q] ;
  fill(ok,ok+q,false) ;

  for(int i = 0 ; i < q ; i++) cin >> m[i] ;
  for(int i = 0 ; i < (1 << n) ; i++){
    ll cnt = 0 ;
    for(int j = 0 ; j < n ; j++){
      if(i >> j & 1) cnt += A[j] ;
    }

    for(int j = 0 ; j < q ; j++){
      if(cnt == m[j]) ok[j] = true ;
    }
  }

  for(int i = 0 ; i < q ; i++){
    if(ok[i]) cout << "yes" << endl ;
    else cout << "no" << endl ;
  }
}