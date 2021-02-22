#include <bits/stdc++.h>
using namespace std ;

int n , q ;

int main(){
  cin >> n ;
  int S[n] ;
  for(int i = 0 ; i < n ; i++) cin >> S[i] ;
  sort(S,S+n) ;
  cin >> q ;
  int T[q] ;
  for(int i = 0 ; i < q ; i++) cin >> T[i] ;

  int count = 0 ;
  for(int i = 0 ; i < q ; i++){
    if(*lower_bound(S,S+n,T[i]) == T[i])count++ ;
  }
  cout << count << endl ;
}