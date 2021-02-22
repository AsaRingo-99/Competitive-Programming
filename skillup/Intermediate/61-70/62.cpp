#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef pair<ll,int> P ;
#define MAX_M (ll)100
#define MAX_N (ll)100
#define INF (ll)1e12

int H , W ;

int cost[10][10] ;

void warshall_floyd(){
  for(int k = 0 ; k < 10 ; k++)
    for(int i = 0 ; i < 10 ; i++)
      for(int j = 0 ; j < 10 ; j++) cost[i][j] = min(cost[i][j] , cost[i][k] + cost[k][j]) ;
}

int main(){
  cin >> H >> W ;
  for(int i = 0 ; i < 10 ; i++){
    for(int j = 0 ; j < 10 ; j++) cin >> cost[i][j] ;
  }
  warshall_floyd() ;
  ll sum = 0 ;
  for(int i = 0 ; i < H ; i++){
    for(int j = 0 ; j < W ; j++){
      int s ;
      cin >> s ;
      if(s == -1 || s == 1) continue ;
      sum += cost[s][1] ;
    }
  }
  cout << sum << endl ;
}