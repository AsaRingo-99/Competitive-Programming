#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)100
#define MAX_N (ll)30
#define INF (ll)1e16

int n ;

int main(){
  cin >> n ;
  int A[n] , B[n] , C[n] ;
  for(int i = 0 ; i < n ; i++) cin >> A[i] ;
  for(int i = 0 ; i < n ; i++) cin >> B[i] ;
  memcpy(C,A,sizeof(A)) ;
  sort(C,C+n) ;

  int i = 0 ;
  int res1 , res2 ;

  do{
    bool ok = true ;
    for(int j = 0 ; j < n ; j++){
      if(A[j] != C[j]) ok = false ;
    }
    if(ok) res1 = i ;

    ok = true ;
    for(int j = 0 ; j < n ; j++){
      if(B[j] != C[j]) ok = false ;
    }
    if(ok) res2 = i ;

    i++ ;

  }while(next_permutation(C,C+n)) ;

  cout << abs(res2 - res1) << endl ;
}