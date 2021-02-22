#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)200
#define MAX_N (ll)1000
#define INF (ll)1e16

int n ;

int main(){
  cin >> n ;
  ll a1 = 1 , a2 = 1 ;
  ll a = 1 ;
  for(int i = 2 ; i <= n ; i++){
    a = a1 + a2 ;
    a1 = a2 ;
    a2 = a ;
  }
  cout << a << endl ;
}