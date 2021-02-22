#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)30
#define MAX_N (ll)6
#define INF (ll)1e8

bool gc(int n){
  int cnt = 0 ;
  for(int i = 1 ; i * i < n ; i++){
    if(n % i == 0) cnt += 2 ;
    if(i * i == n) cnt -= 1 ;
  }
  return cnt == 8 ;
}

int n ;

int main(){
  cin >> n ;
  
  int res = 0 ;
  for(int i = 1 ; i <= n ; i += 2){
    if(gc(i)) res++ ;
  }
  cout << res << endl ;
}