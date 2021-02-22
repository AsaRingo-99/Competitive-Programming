#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define MAX_N 1000

int n ;
vector<int> A[MAX_N] ;
map<int,int> Index ;
bool tir[MAX_N] ;

int main(){
  cin >> n ;
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n - 1 ; j++){
    int s ; 
    cin >> s ;
    A[i].push_back(s-1) ;
    }
  }
  
  int DAY = 0  ;
  while(true){
    DAY++ ;
    bool match = false ;
    fill(tir,tir+n,false) ;
    // i は今いるところ
    for(int i = 0 ; i < n ; i++){
      if(tir[i]) continue ;
      for(int j = Index[i] ; j < n - 1 ; j++){
        //kは行先
        int k = A[i][j] ;
        if(tir[k]) continue ;
        int num = Index[k] ;
        if(i == A[k][num]){
          match = true ;
          Index[k]++ ;
          Index[i]++ ;
          tir[i] = true ;
          tir[k] = true ;
          //cout << DAY << " " << i << " " << k << endl ;
          break ;
        }
      }
    }
    if(!match){
      cout << -1 << endl ;
      return 0 ;
    }
    bool ok = true ;
    for(int i = 0 ; i < n ; i++){
      if(Index[i] != n - 1) ok = false ;
    }
    if(ok) break ;
  }
  cout << DAY << endl ;
}