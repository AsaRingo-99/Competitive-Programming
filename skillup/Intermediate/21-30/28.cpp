#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)100
#define INF (ll)1e18

int n ;
int d[MAX_N] ;
bool used[MAX_N] ;
vector<int> V[MAX_N] ;
queue<int> que ; 

void dfs(int s){
  que.push(s) ;
  d[s] = 0 ;
  while(!que.empty()){
    int node = que.front() ;
    //cout << node << endl ;
    used[node] = true ;
    que.pop() ;
    for(int u : V[node]){
      if(used[u]) continue ;
      if(d[u] != -1) continue ;
      que.push(u) ;
      d[u] = d[node] + 1 ; 
    }
  }
}

int main(){
  cin >> n ;
  fill(d,d+n,-1) ;
  for(int i = 0 ; i < n ; i++){
    int u , k ;
    cin >> u >> k ;
    for(int j = 0 ; j < k ; j++){
      int s ;
      cin >> s ;
      V[u-1].push_back(s-1) ;
    }
  }
  dfs(0) ;
  for(int i = 0 ; i < n ; i++) cout << i + 1 << " " << d[i] << endl ;
}