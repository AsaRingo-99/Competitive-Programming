#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int main(){
  int n ;
  cin >> n ;
  ll A[n] ;
  for(int i = 0 ; i < n ; i++) cin >> A[i] ;
  sort(A,A+n) ;
  ll B[n-1] ;
  for(int i = 1 ; i < n ; i++){
    B[i-1] = A[i] - A[i-1] ;
  }
  ll sum = 0 ;
  for(int i = 1 ; i < n ; i++){
    sum += i * B[i-1] * (n - i) ;
  }
  cout << sum << endl ;
}