#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define INF (ll)1e12

int n , q ;

int main(){
  cin >> n >> q ;
  int count[n+1] ;
  fill(count,count+n+1,0) ;
  for(int i = 0 ; i < q ; i++){
    int l , r ;
    cin >> l >> r ;
    count[l-1]++ ;
    count[r]-- ;
  }
  int s = 0 ;
  for(int i = 0 ; i < n ; i++){
    s += count[i] ;
    if(s % 2 == 0) cout << '0' ;
    else cout << '1' ;
  }
  cout << endl ;
}