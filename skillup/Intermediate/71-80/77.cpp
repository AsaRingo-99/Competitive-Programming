#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef pair<ll,int> P ;
#define MAX_M (ll)100
#define MAX_N (ll)1e5

int n , m ;

int main(){
  cin >> n >> m ;
  ll d[n] ; d[0] = 0 ;
  for(int i = 1 ; i < n ; i++){
    int a ;
    cin >> a ;
    d[i] = d[i-1] + a ;
  }
  int s = 0 ; ll sum = 0 ;
  for(int i = 0 ; i < m ; i++){
    int k ;
    cin >> k ;
    k += s ;
    //cout << s << " " << k << endl ;
    if(s > k) sum += d[s] - d[k] ;
    else sum += d[k] - d[s] ;
    sum %= 100000 ;
    s = k ;
  }
  cout << sum << endl ;
}