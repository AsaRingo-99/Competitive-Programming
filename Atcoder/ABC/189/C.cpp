#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define INF (ll)1e8

int n ;

int main(){
  cin >> n ;
  int A[n] ;
  for(int i = 0 ; i < n ; i++) cin >> A[i] ;
  
  int res = 0 , tmp ;
  for(int i = 0 ; i < n ; i++){
    tmp = INF ;
    for(int j = i ; j < n ; j++){
      tmp = min(tmp,A[j]) ;
      res = max(res,(j - i + 1) * tmp) ;
    }
  }
  cout << res << endl ;
}