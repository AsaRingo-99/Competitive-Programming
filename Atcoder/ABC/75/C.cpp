#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005
#define MAX_V 100
#define INF 1000

bool used[MAX_V] ;
int d[MAX_V] ;
int cost[MAX_V][MAX_V] ;
int V ;

int  m ;

int main(){
  cin >> V >> m ;
  int A[m] , B[m] ;
  for(int i = 0 ; i < m ; i++){
    int s , t ;
    cin >> s >> t ;
    A[i] = s - 1 ;
    B[i] = t - 1 ;
  }

  int count = 0 ; 
  for(int i = 0 ; i < m ; i++){
    int cost[V][V] ;
    
    for(int j = 0 ; j < V ; j++){
      for(int k = 0 ; k < V ; k++) cost[j][k] = INF ;
    }

    for(int j = 0 ; j < m ; j++){
      cost[A[j]][B[j]] = 1 ;
      cost[B[j]][A[j]] = 1 ;
    }
    cost[A[i]][B[i]] = INF ;
    cost[B[i]][A[i]] = INF ;

    fill(d,d+V,INF) ;
    fill(used,used+V,false) ;
    d[0] = 0 ;
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

    for(int j = 0 ; j < V ; j++){
      if(d[j] >= INF){
        count++ ;  
        break ;
      }
    }
  }
  cout << count << endl ;
}
