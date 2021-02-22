#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)15
#define INF 1e6

int n , m ;

int main(){
  cin >> n >> m ;
  ll P[n+1] ; P[0] = 0 ;
  set<ll> Q ; Q.insert(0) ; Q.insert(LLONG_MAX) ;
  for(int i = 1 ; i <= n ; i++) cin >> P[i] ;
  for(int i = 0 ; i <= n ; i++){
    for(int j = 0 ; j <= n ; j++){
      if(P[i] + P[j] > m) continue ;
      Q.insert(P[i] + P[j]) ;
    }
  }
  ll point = 0 ;
  for(auto itr = Q.begin() ; itr != Q.end() ; ++itr){
    auto ptr = Q.lower_bound(m - *itr) ;
    if(*ptr + *itr > m) ptr-- ;
    point = max(point,*ptr+*itr) ;
  }
  cout << point << endl ;
}