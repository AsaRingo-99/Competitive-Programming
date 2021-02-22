#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N 50
#define INF (ll)1e12

int n ;

int main(){
  cin >> n ;
  ll a[n+1] ;
  fill(a,a+n+1,INF) ;
  for(int i = 0 ; i < n ; i++){
    ll s ;
    cin >> s ;
    int k = lower_bound(a,a+n+1,s) - a ;
    a[k] = s ;
  }
  int count = 0 ;
  for(int i = 0 ; i < n + 1 ; i++){
    if(a[i] != INF) count++ ;
  }
  cout << count << endl ;
}