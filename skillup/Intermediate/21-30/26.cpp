#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)2e5
#define INF (ll)1e18

int N , Q ;

vector<int> V[MAX_N] ;
int res[MAX_N] ;

void dfs(int s , int re){
  for(int u : V[s]){
    if(u == re) continue ;
    res[u] += res[s] ;
    dfs(u , s) ;
  }
}

int main(){
  cin >> N >> Q ;
  for(int i = 0 ; i < N - 1 ; i++){
    int a , b ;
    cin >> a >> b ;
    V[a - 1].push_back(b - 1) ;
    V[b - 1].push_back(a - 1) ;
  }
  for(int i = 0 ; i < Q ; i++){
    int q , x ;
    cin >> q >> x ;
    res[q - 1] += x ;
  }
  dfs(0,0) ;
  for(int i = 0 ; i < N ; i++) cout << res[i] << endl ;
}