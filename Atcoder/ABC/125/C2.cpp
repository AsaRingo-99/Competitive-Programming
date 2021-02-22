#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n ;

ll gcd(ll a , ll b){
  if(b == 0) return a ;
  return gcd(b,a%b) ;
}

int main(){
  cin >> n ;
  int R[n] , L[n] , A[n] ;
  for(int i = 0 ; i < n ; i++) cin >> A[i] ;
  sort(A,A+n) ;
  L[0] = 0 ; R[n-1] = 0 ;
  for(int i = 1 ; i < n ; i++){
    L[i] = gcd(L[i-1],A[i-1]) ;
    R[n-i-1] = gcd(A[n-i],R[n-i]) ;
  }
  ll ans = 0 ;
  for(int i = 0 ; i < n ; i++){
    ll stm = gcd(L[i],R[i]) ;
    ans = max(ans,stm) ;
  }
  cout << ans << endl ;
}