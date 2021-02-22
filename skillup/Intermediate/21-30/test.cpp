#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)100
#define MAX_N (ll)50
#define INF (ll)1e18

int n , m ;

int main(){
  cin >> n >> m ;
  priority_queue<ll> que ;
  for(int i = 0 ; i < n ; i++){
    ll a ;
    cin >> a ;
    que.push(a) ;
  }

  int num = 0 ;
  while(num < m){
    ll mon = que.top() ;
    que.pop() ;
    mon /= 2 ;
    que.push(mon) ;
    num++ ;
  }

  ll res = 0 ;
  while(!que.empty()){
    ll mon = que.top() ;
    que.pop() ;
    res += mon ; 
  }
  cout << res << endl ;
}
