#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using Gragh = vector<vector<char>> ;
using Pair = pair<int,int> ;
using ll = long long ;
using que = queue<Pair> ;
using pque = priority_queue<int> ;
using rpque = priority_queue<int,vector<int>,greater<int>> ;
#define MAX_V 100
#define INFO 100000

bool used[MAX_V] ;
int d[MAX_V] ;
int cost[MAX_V][MAX_V] ;
int V ;

void dijkstra(int s){
  fill(d,d+V,INFO) ;
  fill(used,used+V,false) ;
  d[s] = 0 ;
  while(true){
    int v = -1 ;
    for(int u = 1 ; u < V ; u++){
      if(!used[u] && (v == -1 || d[u] < d[v])) v = u ;
    }
    if(v == -1) break ;
    
    used[v] = true ;
    for(int u = 1 ; u < V ; u++){
      d[u] = min(d[u],d[v] + cost[v][u]) ;
    }
  }
}

int main(){
  cin >> V ;
  V += 1 ;
  for(int i = 1 ; i < V; i++){
    for(int j = i ; j < V ; j++){
      if(i == j) cost[i][i] = 0 ;
      else{
      cost[i][j] = INFO ;
      cost[j][i] = INFO ;
      }
    }
  }
  for(int i = 1 ; i < V - 1 ; i++){
    int U , V , D ;
    cin >> U >> V >> D ;
    cost[U][V] = D ;
    cost[V][U] = D ;
  }
  dijkstra(1) ;
  for(int u = 1 ; u < V ; u++){
    if(d[u] % 2 == 0) cout << 1 << endl ;
    else cout << 0 << endl ;
  }
}