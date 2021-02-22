#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef pair<ll,int> P ;
#define MAX_M (ll)100
#define MAX_N (ll)5000
#define INF 1e6

int n , k ;

struct edge
{
  int to ;
  ll cost ;
};

ll d[MAX_N] ;
P Q[MAX_N] ;
bool used[MAX_N] ;
vector<edge> G[MAX_N] ;
vector<int> V[MAX_N] ;

void bfs(){
  for(int i = 0 ; i < n ;i++){
    fill(used,used+n,false) ;
    queue<P> que ;
    que.push(P(i,Q[i].second)) ;
    while(!que.empty()){
      P p = que.front() ; que.pop() ;
      int u = p.first , res = p.second ;
      used[u] = true ;
      if(res <= 0) continue ;
      for(int j = 0 ; j < V[u].size() ; j++){
        edge E ;
        E.to = V[u][j] ;
        if(used[E.to]) continue ;
        used[E.to] = true ;
        E.cost = Q[i].first ;
        //cout << i << " " << E.to << " " << E.cost << endl ;
        G[i].push_back(E) ;
        que.push(P(E.to,res-1)) ;
      }
    }
  }
}

ll djikstra(){
  fill(d,d+n,LLONG_MAX) ;
  d[0] = 0 ;
  priority_queue<P,vector<P>,greater<P>> que ;
  que.push(P(0,0)) ;
  while(!que.empty()){
    P p = que.top() ; que.pop() ;
    int v = p.second ;
    if(d[v] < p.first) continue ;
    for(int i = 0 ; i < G[v].size() ; i++){
      edge e = G[v][i] ;
      //cout << v << " " << e.to << endl ;
      if(d[e.to] > d[v] + e.cost){
        d[e.to] = d[v] + e.cost ;
        que.push(P(d[e.to],e.to)) ;
      }
    }
  }
  return d[n-1] ;
}

int main(){
  cin >> n >> k ;
  for(int i = 0 ; i < n ; i++) cin >> Q[i].first >> Q[i].second ;
  for(int i = 0 ; i < n ; i++){
    int s , t ;
    cin >> s >> t ;
    V[s-1].push_back(t-1) ;
    V[t-1].push_back(s-1) ;
  }
  bfs() ;
  cout << djikstra() << endl ;
}