#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using Gragh = vector<vector<char>> ;
using Pair = pair<int,int> ;
using ll = long long ;
using que = queue<Pair> ;
using pque = priority_queue<int> ;
using rpque = priority_queue<int,vector<int>,greater<int>> ;


ll MAX_V = 100000000 ;
ll INF = 100000000 ;

bool used[MAX_V] ;
ll d[MAX_V] ;
ll cost[MAX_V][MAX_V] ;
int V ;

int n , q , k ;
int x[INF] , y[INF] ;

ll dijkstra(int s , int t){
  fill(d,d+n,INF) ;
  fill(used,used+V,false) ;
  d[s] = 0 ;
  while(true){
    int v = -1 ;
    for(int u = 0 ; u < n ; u++){
      if(!used[u] && (v == -1 || d[u] < d[v])) v = u ;
    }
    if(v == -1) break ;
    used[v] = true ;

    for(int u = 0 ; u < n ; u++){
      d[u] = min(d[u],d[v] + cost[v][u]) ;
    }
  }
  return d[t] ;
}

int main(){
  cin >> n ;
  V = n - 1 ;
  for(int i = 0 ; i <= V ; i++){
    for(int j = 0 ; j <= V ; j++){
      cost[i][j] = INF ;
      cost[j][i] = INF ;
    }
  }
  for(int i = 0 ; i < V ; i++){
    ll a , b , c ;
    cin >> a >> b >> c ;
    cost[a-1][b-1] = c ;
    cost[b-1][a-1] = c ;
  }
  cin >> q >> k ;
  for(int i = 0 ; i < q ; i++){
    cin >> x[i] >> y[i] ;
  }
  for(int i = 0 ; i < q ; i++){
    int X = x[i] - 1 , Y = y[i] - 1 ;
    cout << dijkstra(X,k-1) + dijkstra(k-1,Y) << endl ;
  }
}