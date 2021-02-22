#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100007

int n ;
int A[M] ;

int main(){
  cin >> n ;
  for(int i = 0 ; i < n ; i++) cin >> A[i] ;
  sort(A,A+n) ;
  int half_r = n / 2 , half_l = n / 2 - 1 ;
  if(A[half_l] == A[half_r]){
    cout << 0 << endl ;
    return 0 ;
  }
  cout << A[half_r] - A[half_l] << endl ;
}