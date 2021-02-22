#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)1000
#define INF (ll)1e18

int sx , sy , gx , gy ;
int H , W , N ;
char maze[MAX_N][MAX_N] ;
int V[MAX_N][MAX_N] ;
int d[9] ;
pair<int,int> chese[9] ;

int dx[] = {-1,0,1,0} , dy[] = {0,-1,0,1} ;

void dfs(int sx , int sy){
  for(int i = 0 ; i < N ; i++){

    gx = chese[i].first ; gy = chese[i].second ;

    for(int j = 0 ; j < H ; j++){
      for(int k = 0 ; k < W ; k++){
        V[j][k] = 0 ;
      }
    }

    queue<pair<int,int>> que ;
    pair<int,int> p(sx,sy) ;
    que.push(p) ;

    while(!que.empty()){
      int x = que.front().first , y = que.front().second ;
      que.pop() ;
      for(int j = 0 ; j < 4 ; j++){
        int nx = x + dx[j] , ny = y + dy[j] ;
        if(0 <= nx && nx < H && 0 <= ny && ny < W && maze[nx][ny] == '.' && V[nx][ny] == 0){
          V[nx][ny] = V[x][y] + 1 ;
          pair<int,int> pir(nx,ny) ;
          que.push(pir) ;
        }
      }
    }
    //cout << gx << " " << gy << " " << V[gx][gy] << endl ;
    d[i] = V[gx][gy] ;
    sx = chese[i].first ; sy = chese[i].second ;
  }
}

int main(){
  cin >> H >> W >> N ;
  for(int i = 0 ; i < H ; i++){
    for(int j = 0 ; j < W ; j++){
      cin >> maze[i][j] ;
      for(int k = 1 ; k <= N ; k++){
        if(maze[i][j] == '0'+k){
          pair<int,int> p(i,j) ;
          chese[k-1] = p ;
          maze[i][j] = '.' ;
        }
      }
      if(maze[i][j] == 'S'){
        sx = i , sy = j ;
        maze[i][j] = '.' ;
      }
    }
  }

  dfs(sx,sy) ;

  ll sum = 0 ;
  for(int i = 0 ; i < N ; i++) sum += d[i] ;
  cout << sum << endl ;
}