#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)100
#define MAX_N (ll)30
#define INF (ll)1e16

int n ;
int A[MAX_N] , B[MAX_N] ;

int main(){
  cin >> n ;
  for(int i = 0 ; i < n ; i++){
    int s , t ;
    cin >> s >> t ;
    if(t < s) swap(s,t) ;
    A[i] = s ; B[i] = t ;
  }

  ll res = INF ;
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
      ll cnt = 0 ;
      for(int k = 0 ; k < n ; k++){
        cnt += abs(A[i] - A[k]) + abs(A[k] - B[k]) + abs(B[j] - B[k]) ;
      }
      res = min(res,cnt) ;
    }
  }
  cout << res << endl ;
}