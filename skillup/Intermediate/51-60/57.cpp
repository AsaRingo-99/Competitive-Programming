#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef pair<ll,int> P ;
#define MAX_M (ll)100
#define MAX_N (ll)100
#define INF (ll)1e12

int n , k ;
ll cost[MAX_N][MAX_N] ;
ll d[MAX_N] ;

ll djikstra(int s , int t){
  fill(d,d+n,INF) ;
  d[s] = 0 ;
  priority_queue<P,vector<P>,greater<P>> que ;
  que.push(P(0,s)) ;
  while(!que.empty()){
    P p = que.top() ;
    que.pop() ;
    int v = p.second ;
    if(d[v] < p.first) continue ;

    for(int u = 0 ; u < n ; u++){
      if(d[u] > d[v] + cost[v][u]){
        d[u] = d[v] + cost[v][u] ;
        que.push(P(d[u],u)) ;
      }
    }
  }
  return d[t] ;
}

int main(){
  cin >> n >> k ;
  for(int i = 0 ; i < n ; i++) fill(cost[i],cost[i]+n,INF) ;
  vector<ll> ans ;
  for(int i = 0 ; i < k ; i++){
    int m ;
    cin >> m ;
    if(m == 0){
      int s , t ;
      cin >> s >> t ;
      ans.push_back(djikstra(s-1,t-1)) ;
    }
    else{
      ll s , t , dis ;
      cin >> s >> t >> dis ;
      cost[s-1][t-1] = min(cost[s-1][t-1],dis) ;
      cost[t-1][s-1] = min(cost[t-1][s-1],dis) ;
    }
  }
  for(ll u : ans){
    if(u == INF) cout << -1 << endl ;
    else cout << u << endl ;
  }
}