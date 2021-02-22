#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef pair<ll,int> P ;
#define MAX_M (ll)100
#define MAX_N 300
#define mod 10007

int n ;

ll A[MAX_N][MAX_N] ;

vector<vector<ll>> mat(vector<vector<ll>> A , vector<vector<ll>> B){
  vector<vector<ll>> C(A.size(),vector<ll>(B[0].size())) ;
  for(int i = 0 ; i < A.size() ; i++)
    for(int j = 0 ; j < B[0].size() ; j++){
      C[i][j] = 0 ;
      for(int k = 0 ; k < B.size() ; k++){
        C[i][j] += (A[i][k] * B[k][j]) % mod ;
      }
    }
  return C ;
}

vector<vector<ll>> RSCmat(ll n , vector<vector<ll>> A , vector<vector<ll>> x){
  n -= 3 ;
  while(n > 0){
    if(n & 1) x = mat(A,x) ;
    A = mat(A,A) ;
    n >>= 1 ;
  }
  return x ;
}

int main(){
  cin >> n ;
  vector<vector<ll>> A(3) , x(3) ;
  //Aに関して
  A[0].push_back(1) ;
  A[0].push_back(1) ;
  A[0].push_back(1) ;
  A[1].push_back(1) ;
  A[1].push_back(0) ;
  A[1].push_back(0) ;
  A[2].push_back(0) ;
  A[2].push_back(1) ;
  A[2].push_back(0) ;
  //xに関して
  x[0].push_back(1) ;
  x[1].push_back(0) ;
  x[2].push_back(0) ;

  vector<vector<ll>> C = RSCmat(n,A,x) ;
  if(n == 1 || n == 2) cout << 0 << endl ;
  else cout << C[0][0] % mod << endl ;
}