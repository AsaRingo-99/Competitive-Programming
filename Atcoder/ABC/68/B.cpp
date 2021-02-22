#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n ;

int main(){
  cin >> n ;
  int count = 0 , res = 0 , ans = 0 ;
  for(int i = 1 ; i <= n ; i++){
    int k = i ;
    count = 0 ;
    while(k % 2 == 0){
      k /= 2 ;
      count++ ;
    }
    if(res <= count){
      res = count ;
      ans = i ;
    }
  }
  cout << ans << endl ;
}