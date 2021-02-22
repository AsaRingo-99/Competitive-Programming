#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)30
#define MAX_N (ll)6
#define INF (ll)1e8

int n , x , zero ;

int main(){
  cin >> n >> x >> zero >> zero ;

  int ans = 0 ;

  for(int i = 1 ; i <= n ; i++){
    for(int j = i + 1 ; j <= n ; j++){
      for(int k = j + 1 ; k <= n ; k++){
        if(i + j + k == x) ans++ ;
      }
    }
  }
  cout << ans << endl ;
  return 0 ;
}