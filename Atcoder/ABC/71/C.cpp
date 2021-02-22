#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100

ll n ;

int main(){
  cin >> n ;
  ll A[n] ;
  map<ll,ll> rem ;
  for(int i = 0 ; i < n ; i++){
    ll s ;
    cin >> s ;
    rem[s]++ ;
    A[i] = s ;
  }
  sort(A,A+n) ;

  ll fir = 0 , sec = 0 ;
  ll obo = -1 ;
  for(int i = 0 ; i < n ; i++){
    if(obo != A[i]){
      if(rem[A[i]] >= 4){
        fir = A[i] ;
        sec = A[i] ;
      }
      else if(rem[A[i]] >= 2){
        sec = fir ;
        fir = A[i] ;
      }
    }
    obo = A[i] ;
  }
  cout << fir * sec << endl ;
}