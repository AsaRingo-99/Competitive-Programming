#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef pair<int,int> P ;
#define MAX_M (ll)100
#define MAX_N 50
#define INF (ll)1e18

int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1} ;

int H , W ;
char maze[MAX_N][MAX_N] ;
int road[MAX_N][MAX_N] ;

void dfs(int i , int j){
  road[i][j] = 0 ;
  P q(i,j) ;
  queue<P> que ;
  que.push(q) ;
  while(!que.empty()){
    int x = que.front().first , y = que.front().second ;
    que.pop() ;
    for(int i = 0 ; i < 4 ; i++){
      int nx = x + dx[i] , ny = y + dy[i] ;
      if(0 <= nx && nx < H && 0 <= ny && ny < W && maze[nx][ny] == '.' && road[nx][ny] == -1){
        road[nx][ny] = road[x][y] + 1 ;
        que.push(P(nx,ny)) ;
      }
    }
  }
}

int main(){
  cin >> H >> W ;
  int black = 0 ;
  for(int i = 0 ; i < H ; i++){
    for(int j = 0 ; j < W ; j++){
      cin >> maze[i][j] ;
      if(maze[i][j] == '#') black++ ;
    }
  }
  memset(road,-1,sizeof(road)) ;
  dfs(0,0) ;
  int tmp = road[H-1][W-1] ;
  if(tmp == -1) cout << -1 << endl ;
  else cout << H * W - 2 - black - tmp + 1 << endl ;
}