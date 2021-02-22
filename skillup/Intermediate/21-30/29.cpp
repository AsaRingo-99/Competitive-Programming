#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)50
#define INF (ll)1e18

int R , C ;
int sx , sy , gx , gy ;
int V[MAX_N][MAX_N] ;
char maze[MAX_N][MAX_N] ;

int dx[] = {-1,0,1,0} , dy[] = {0,-1,0,1} ;

void bfs(int sx , int sy){
  V[sx][sy] = 0 ;
  pair<int,int> P(sx,sy) ;
  queue<pair<int,int>> que ;
  que.push(P) ;
  while(!que.empty()){
    int x = que.front().first , y = que.front().second ;
    que.pop() ;
    for(int i = 0 ; i < 4 ; i++){
      int nx = x + dx[i] , ny = y + dy[i] ;
      if(0 <= nx && nx < R && 0 <= ny && ny < C && maze[nx][ny] == '.' && V[nx][ny] == 0){
        pair<int,int> pr ;
        pr.first = nx , pr.second = ny ;
        que.push(pr) ;
        V[nx][ny] = V[x][y] + 1 ;
      }
    }
  }
}

int main(){
  cin >> R >> C >> sx >> sy >> gx >> gy ;
  for(int i = 0 ; i < R ; i++){
    for(int j = 0 ; j < C ; j++) cin >> maze[i][j] ;
  }
  bfs(sx-1,sy-1) ;
  cout << V[gx-1][gy-1] << endl ;
}