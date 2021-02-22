#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n ;

int main(){
  cin >> n ;
  int A[n] , B[n];
  for(int i = 0 ; i < n ; i++){
    int s ;
    cin >> s ;
    A[i] = s ; B[i] = s ;
  }
  sort(A,A+n) ;
  int fir = A[n-1] , sec = A[n-2] ;
  for(int i = 0 ; i < n ; i++){
    if(B[i] == fir) cout << sec << endl ;
    else cout << fir << endl ;
  }
}