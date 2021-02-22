#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n ;

int main(){
  cin >> n ;
  ll A[n+1] , B[n] ;
  for(int i = 0 ; i < n+1 ; i++) cin >> A[i] ;
  for(int i = 0 ; i < n ; i++) cin >> B[i] ;
  ll count = 0 ;
  for(int i = 0 ; i < n ; i++){
    count += min(A[i],B[i]) ;
    if(A[i] < B[i]){
      count += min(B[i]-A[i],A[i+1]) ;
      if(B[i]-A[i] > A[i+1]) A[i+1] = 0 ;
      else A[i+1] -= B[i]-A[i] ;
    }
  }
  cout << count << endl ;
}