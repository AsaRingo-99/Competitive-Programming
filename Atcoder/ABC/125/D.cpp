#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define INF (ll)1e10

int n ;

int main(){
  cin >> n ;
  ll A[n] ;
  ll sum = 0 ;
  ll minval = INF ;
  for(int i = 0 ; i < n ; i++){
    cin >> A[i] ;
    minval = min(minval,abs(A[i])) ;
    sum += abs(abs(A[i])) ;
  }
  for(int i = 0 ; i < n - 1 ; i++){
    if(A[i] < 0){
      A[i] *= -1 ;
      A[i+1] *= -1 ;
    }
  }
  if(A[n-1] < 0) sum -= 2 * minval ;
  cout << sum << endl ;
}