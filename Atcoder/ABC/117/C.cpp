#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define INF (ll)1e12

int n , m ;

int main(){
  cin >> n >> m ;
  int A[m] ;
  for(int i = 0 ; i < m ; i++) cin >> A[i] ;
  if(n >= m){
    cout << 0 << endl ;
    return 0 ;
  }
  sort(A,A+m) ;
  int D[m-1] ;
  for(int i = 0 ; i < m - 1 ; i++) D[i] = A[i+1] - A[i] ;
  sort(D,D+m-1,greater<int>()) ;
  int sum = 0 ;
  for(int i = 0 ; i < m - 1 ; i++){
    if(n - 1 > i) continue ;
    sum += D[i] ;
  }
  cout << sum << endl ;
}