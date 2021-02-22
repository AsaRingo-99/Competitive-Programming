#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n ;

vector<int> G(int n){
  vector<int> res ;
  for(int i = 1 ; i * i <= n ; i++){
    if(n % i == 0){
      res.push_back(i) ;
      if(i * i != n) res.push_back(n/i) ;
    }
  }
  sort(res.begin(),res.end()) ;
  return res ;
}

int main(){
  cin >> n ;
  int A[n] ;
  for(int i = 0 ; i < n ; i++) cin >> A[i] ;
  sort(A,A+n) ;
  vector<int> U = G(A[0]) ;
  vector<int> V = G(A[1]) ;
  int ans = 0 ;
  for(int i = 0 ; i < U.size() ; i++){
    int count = 0 ;
    bool ok = true ;
    for(int j = 1 ; j < n ; j++){
      if(A[j] % U[i] != 0){
        count++ ;
      }
      if(count > 1) ok = false ;
    }
    if(ok) ans = max(ans,U[i]) ;
  }

  for(int i = 0 ; i < V.size() ; i++){
    int count = 0 ;
    bool ok = true ;
    for(int j = 2 ; j < n ; j++){
      if(A[j] % V[i] != 0) ok = false ;
    }
    if(ok) ans = max(ans,V[i]) ;
  }
  cout << ans << endl ;
}