#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n ;

int main(){
  cin >> n ;
  double A[n] ;
  for(int i = 0 ; i < n ; i++) cin >> A[i] ;
  double B[n] ;
  for(int i = 0 ; i < n ; i++) B[i] = 1 / A[i] ;
  double sum = 0 ;
  for(int i = 0 ; i < n ; i++) sum += B[i] ;
  double ans = 1 / sum ;
  cout << setprecision(15) << ans << endl ;
}