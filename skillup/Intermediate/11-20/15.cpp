#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)100
#define MAX_N (ll)30
#define INF (ll)1e16

int n ;

double mesure(double x , double y){
  return sqrt(x * x + y * y) ;
}

int main() {
  cin >> n ;
  double x[n] , y[n] ;
  int loc[n] ;
  for(int i = 0 ; i < n ; i++){
    cin >> x[i] >> y[i] ;
    loc[i] = i ;
  }

  double dis = 0 ;
  int cnt = 0 ;
  do {
    int ix = x[loc[0]] , iy = y[loc[0]] ;
    for(int i = 1 ; i < n ; i++){
      dis += mesure(x[loc[i]] - ix , y[loc[i]] - iy) ;
      ix = x[loc[i]] ; iy = y[loc[i]] ;
    }
    cnt++ ;
  } while (next_permutation(loc,loc+n));

  double ans = dis /cnt ; 
  cout << setprecision(15) << ans << endl ;

  return 0;
}