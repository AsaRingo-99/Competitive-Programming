#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define MAX 100007

bool used[MAX] ;
int d[MAX] ;
int d2[MAX] ;
int cost[MAX][MAX] ;
int V ;

ll N , M ;
int v[MAX] , u[MAX] ;
int S , T ;

void dijkstra(int s){
  fill(d,d+V,MAX) ;
  fill(used,used+V,false) ;
  d[s] = 0 ;
  while(true){
    int v = -1 ;
    for(int u = 0 ; u < V ; u++){
      if(!used[u] && (v == -1 || d[u] < d[v])) v = u ;
    }
    if(v == -1) break ;
    used[v] = true ;

    for(int u = 0 ; u < V ; u++){
      d[u] = min(d[u],d[v] + cost[v][u]) ;
    }
  }
}

int main(){
  cin >> N >> M ;
  for(int i = 0 ; i < N ; i++){
    int p , q ;
    cin >> p >> q ;
    cost[p][q] = 1 ;
    cost[q][p] = 1 ;
  }
  cin >> S >> T ;


}