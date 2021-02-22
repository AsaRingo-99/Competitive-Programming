#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)100
#define MAX_N (ll)30
#define INF (ll)1e16

int n ;

int main(){
  cin >> n ;
  int A[n] , B[n] , C[n] ;
  int pile_B[n] ;
  for(int i = 0 ; i < n ; i++) cin >> A[i] ;
  for(int i = 0 ; i < n ; i++) cin >> B[i] ;
  for(int i = 0 ; i < n ; i++) cin >> C[i] ;
  sort(B,B+n) ; sort(C,C+n) ;
  for(int i = 0 ; i < n ; i++){
    if(i == 0) pile_B[i] = n - (upper_bound(C,C+n,B[i]) - C) ;
    else pile_B[i] = pile_B[i-1] + n - (upper_bound(C,C+n,B[i]) - C) ;
  }
  int count = 0 ;
  for(int i = 0 ; i < n ; i++){
    int index = upper_bound(B,B+n,A[i]) - B ;
    count += pile_B[n - 1] - pile_B[index - 1] ;
  }
  cout << count << endl ;
}