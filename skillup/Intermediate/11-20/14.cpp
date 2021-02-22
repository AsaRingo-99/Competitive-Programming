#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_k (ll)15
#define MAX_N (ll)15
#define INF (ll)1e18

int n , k ;

int main(){
  cin >> n >> k ;
  ll A[n] , B[n] ;
  bool seen[n] ;
  fill(seen,seen+n,false) ;

  for(int i = 0 ; i < n ; i++) cin >> A[i] ;

  ll cost = INF ;
  for(int i = 0 ; i < (1 << n) ; i++){
    int count = 0 ;
    fill(seen,seen+n,false) ;
    for(int j = 0 ; j < n ; j++){
      if(i >> j & 1){
        count++ ;
        seen[j] = true ;
      }
    }
    if(count < k) continue ;

    ll building = 0 , val = 0 ;
    for(int j = 0 ; j < n ; j++){
      if(seen[j] && A[j] <= building){
        val += building - A[j] + 1 ;
        building++ ;
      }
      building = max(building,A[j]) ;
    }
    cost = min(cost,val) ;
  }
  cout << cost << endl ;
}