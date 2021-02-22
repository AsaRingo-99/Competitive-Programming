#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n ;

int main(){
  cin >> n ;
  int H[n] ;
  for(int i = 0 ; i < n ; i++) cin >> H[i] ;
  ll big = 0 , res = 0 , sum = 1 ;
  for(int i = 0 ; i < n ; i++){
    if(H[i] > big) sum = 0 ;
    res = max(res,sum) ;
    big = H[i] ;
    sum++ ;
  }
  cout << res << endl ;
}