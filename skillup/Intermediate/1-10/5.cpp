#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)100
#define MAX_N (ll)100
#define INF (ll)1e9

int A , B , C , X , Y ;

int main(){
  cin >> A >> B >> C >> X >> Y ;
  
  ll res = A * X + B * Y ;
  ll val = 0 ;
  for(int i = 0 ; i < max(X,Y) ; i++){
    if(i + 1 > X) A = 0 ;
    if(i + 1 > Y) B = 0 ;
    val = 2 * C - A - B ;
    res = min(res,(res + val)) ;
  }
  cout << res << endl ;
}