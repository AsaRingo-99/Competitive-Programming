#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define MAX_N (ll)2e5 + 3

int N , Q ;
vector<int> G[MAX_N] ;
ll v[MAX_N] ;

void bfs(){
  queue<int> que ;
  que.push(0) ;
  while(!(que.empty())){
    int u = que.front() ;
    que.pop() ;
    for(int node : G[u]){
      v[node] += v[u] ;
      que.push(node) ;
    }
  }
}

int main(){
  cin >> N >> Q ;
  fill(v,v+N,0) ;
  for(int i = 0 ; i < N - 1; i++){
    int a , b ;
    cin >> a >> b ;
    G[a-1].push_back(b-1) ;
  }
  for(int i = 0 ; i < Q ; i++){
    int p , x ;
    cin >> p >> x ;
    v[p-1] += x ;
  }
  bfs() ;
  for(int i = 0 ; i < N ; i++) cout << v[i] << " " ;
}