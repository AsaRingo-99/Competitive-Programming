#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define N 300 

int n ;
ll A[N][N] ;
vector<ll> B ;
ll cost[N][N] ;
bool used[N] ;

void warshall_floyd(int n) {
  for (int k = 0; k < n; k++){       // 経由する頂点
    for (int i = 0; i < n; i++) {    // 始点
      for (int j = 0; j < n; j++) {  // 終点
        cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
      }
    }
  }
}

int main(){
  cin >> n ;
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
      int s ;
      cin >> s ;
      A[i][j] = s ;
      if(j > i) B.push_back(s) ;
    }
  }

  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ;j++){
      cost[i][j] = 2e9 ;
    }
  }
  fill(used,used+n,false) ;
  sort(B.begin(),B.end()) ;

  for(auto u : B){
    if(used[u])
  }

  int sum = 0 ;
  for(int i = 0 ; i < n - 1 ; i++){
    int res = 0 ;
    for(int j = i ; j < n ; j++){
      if(cost[i][j] < A[i][j]){
        cost[i][j] = A[i][j] ;
        cost[j][i] = A[i][j] ;
      }
    }
  }

}