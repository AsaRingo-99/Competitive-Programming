#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)100 
#define INF (ll)1e18

int W , H ; 
char maze[MAX_N][MAX_N] ;
bool used[MAX_N][MAX_N] ;

int DX[] = {-1,0,1,0} , DY[] = {0,-1,0,1} ;

void bfs(int x , int y){
  bool odd ;
  queue<pair<int,int>> que ;
  pair<int,int> p(x,y) ;
  que.push(p) ;
  while(!que.empty()){
    int X = que.front().first , Y = que.front().second ;
    que.pop() ;
    if(Y % 2 == 0) odd = true ;
    for(int dx : DX){
      for(int dy : DY){
        if(odd && dx == -1 && dy != 0) continue ;
        if(!odd && dx == 1 && dy != 0) continue ;
      }
    }
  }
}

int main(){
  cin >> W >> H ;
  for(int i = 0 ; i < H ; i++){
    for(int j = 0 ; j < W ; j++){
      cin >> maze[i][j] ;
    }
  }

}