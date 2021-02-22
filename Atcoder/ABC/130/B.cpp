#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n , x ;

int main(){
  cin >> n >> x ;
  int res = 1 ;
  int axis = 0 ;
  for(int i = 0 ; i < n ; i++){
    int L ;
    cin >> L ;
    axis += L ;
    if(axis <= x){
      res++ ;
    }
  }
  cout << res << endl ;
}