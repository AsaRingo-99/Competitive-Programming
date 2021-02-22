#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef pair<ll,ll> P ;
#define MAX_M (ll)100
#define MAX_N (ll)1e6
#define INF (ll)1e18

ll d[MAX_N] ;
ll cost[MAX_N][MAX_N] ;
int n , m , x ;

void djikstra(int s){
  d[s] = 0 ;
  P p(d[s],s) ;
  priority_queue< P , vector< P > , greater< P > > que ;
  que.push(p) ;
  while(!que.empty()){
    ll pos = que.top().second , dis = que.top().first ;
    que.pop() ;
    if(d[pos] < dis) continue ;

    for(int u = 0 ; u < n ; u++){
      if(d[u] > d[pos] + cost[pos][u]){
        d[u] = d[pos] + cost[pos][u] ;
        que.push(P(d[u],u)) ;
      }
    }
  }
}

int main(){
  cin >> n >> m >> x ;
  for(int i = 0 ; i < n ; i++) d[i] = INF ;
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++) cost[i][j] = INF ;
  }

  for(int i = 0 ; i < m ; i++){
    int s , t , r ;
    cin >> s >> t >> r ;
    cost[s][t] = r ;
    //cost[t][s] = r ; //無向グラフの場合
  }
  djikstra(x) ;
  for(int i = 0 ; i < n ; i++){
    if (d[i] == INF) cout << "INF" << endl ;
    else cout << d[i] << endl ;
  }
}