#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n ;

int main(){
  cin >> n ;
  int A[n] , B[n] ;
  map<int,bool> C ;
  for(int i = 0 ; i < n ; i++){
    int s ;
    cin >> s ;
    A[i] = s ;
    B[i] = s ;
    C[s] = true ;
  }

  sort(B,B+n) ;

  int fir = B[n-1] ;
  int tmp = 0 , res = n - 1 , color = 0 ;

  while(tmp < n){
    if(A[tmp] == fir){
      color++ ;
      while(res >= 0){
        res-- ;
        if(C[B[res]]) fir = B[res] ;
      }
    }
    C[A[tmp]] = false ;
    tmp++ ; 
  }
  cout << color << endl ;
}