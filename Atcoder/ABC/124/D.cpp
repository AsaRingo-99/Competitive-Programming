#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n , k ;

int main(){
  cin >> n >> k ;
  char A[n] ;
  for(int i = 0 ; i < n ; i++){
    cin >> A[i] ;
  }
  int lef = 0 , rig = 0 , sum = 0 ;
  while(lef < n){
    while(rig < n && A[rig] == '1') rig++ ;
    sum = max(sum,rig-lef) ;
    while(rig < n && A[rig] == '0') rig++ ;
    k-- ;
    if(k < 0){
      while(lef < n && A[lef] == '1') lef++ ;
      while(lef < n && A[lef] == '0') lef++ ;
      sum = max(sum,rig-lef) ;
    }
  }
  cout << sum << endl ;
}