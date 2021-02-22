#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int main(){
  char S[4] ;
  for(int i = 0 ; i < 4 ; i++) cin >> S[i] ;
  int A[4] ;
  for(int i = 0 ; i < 4 ; i++){
    A[i] = S[i] - '0' ;
  }
  for(int i = 0 ; i < (1 << 3) ; i++){
    int res = A[0] ;
    vector<char> tmp ;
    tmp.push_back(S[0]) ;
    for(int j = 0 ; j < 3 ; j++){
      if(i >> j & 1){
        res += A[j+1] ;
        tmp.push_back('+') ;
        tmp.push_back(S[j+1]) ;
      }
      else{
        res -= A[j+1] ;
        tmp.push_back('-') ;
        tmp.push_back(S[j+1]) ;
      }
    }
    if(res == 7){
      tmp.push_back('=') ;
      tmp.push_back('7') ;
      for(char u : tmp) cout << u ;
      cout << endl ;
      return 0 ;
    }
  }
}