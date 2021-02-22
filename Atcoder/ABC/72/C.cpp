#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;

int main(){
  int n ;
  cin >> n ;
  int L = 100007 ;
  int A[L] ;
  fill(A,A+L,0) ;
  for(int i = 0 ; i < n ; i++){
    int s ;
    cin >> s ;
    A[s]++ ;
  }

  int res = 0 ;
  for(int i = 1 ; i < L ; i++){
    res = max(res,A[i-1]+A[i]+A[i+1]) ;
  }
  cout << res << endl ;
}