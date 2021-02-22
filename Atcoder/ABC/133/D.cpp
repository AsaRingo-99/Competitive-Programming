#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n ;

int main(){
  cin >> n ;
  ll A[n] ;

  int sum = 0 ;
  for(int i = 0 ; i < n ; i++){
    cin >> A[i] ;
    if(i % 2 == 0) sum += A[i] ;
    else sum -= A[i] ;
  }
  int res = 0 ;
  cout << sum << " " ;
  for(int i = 0 ; i < n - 1 ; i++){
    sum = 2 * A[i] - sum ;
    cout << sum << " " ;
  }
  cout << endl ;

}