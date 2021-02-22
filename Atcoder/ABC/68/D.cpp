#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

ll n ;

int main(){
  cin >> n ;
  cout << 50 << endl ;
  ll tmp = n / 50 ;
  ll mod = n % 50 ;
  int A[50][50] ;
  for(int i = 0 ; i < 50 ; i++) A[0][i] = i ;
  for(int i = 1 ; i < 50 ; i++){
    for(int j = 0 ; j < 50 ; j++){
      if(A[i-1][j] == 0) A[i][j] = A[i-1][j] + 50 ;
      else A[i][j] = A[i-1][j] - 1 ;
    }
  }
  for(int i = 0 ; i < 50 ; i++){
    cout << A[mod][i] + tmp << " " ;
  }
  cout << endl ;
}