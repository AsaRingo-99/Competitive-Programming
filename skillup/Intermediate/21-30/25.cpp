#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)50
#define INF (ll)1e18

int w , h ;
bool V[MAX_N][MAX_N] ;

void dfs(int x , int y){
  V[x][y] = false ;
  for(int dx : {-1,0,1}){
    for(int dy : {-1,0,1}){
      int nx = x + dx , ny = y + dy ;
      if( V[nx][ny] && 0 <= nx && nx < h && 0 <= ny && ny < w ){
        dfs(nx,ny) ;
      }
    }
  }
}

int main(){
  vector<int> ans ;
  while(true){
    cin >> w >> h ;
    if(w == 0 && h== 0) break ;
    for(int i = 0 ; i < h ; i++){
      for(int j = 0 ; j < w ; j++){
        int tf ;
        cin >> tf ;
        if(tf == 1) V[i][j] = true ;
        else V[i][j] = false ;
      }
    }
    int count = 0 ;

    for(int i = 0 ; i < h ; i++){
      for(int j = 0 ; j < w ; j++){
        if(V[i][j]){
          dfs(i,j) ;
          count++ ;
        }
      }
    }
    ans.push_back(count) ;
  }
  for(int i = 0 ; i < ans.size() ; i++) cout << ans[i] << endl ;
}