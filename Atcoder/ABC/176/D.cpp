#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using Gragh = vector<vector<char>> ;
using P = pair<int,int> ;
using ll = long long ;
#define INF 10000

int h , w , ch , cw , dh , dw ;

void dfs(int i , int j , Gragh map , V_2 &magic){
  for(int x = -2 ; x <= 2 ; x++){
    for(int y = -2 ; y <= 2 ; y++){
      int dx = i + x , dy = j + y ;
      if(dx >= 0 && dx < h && dy >= 0 && dy < w && map[dx][dy] == '.'){
        see[dx][dy] = true ;
        if(abs(x) == 2 || abs(y) == 2 || (abs(x) >= 1 && abs(y) >= 1)){
          if(magic[dx][dy] > magic[i][j] + 1) magic[dx][dy] = magic[i][j] + 1 ;
          cout << dx << " " << dy << " " << magic[dx][dy] << endl ;
        }
        dfs(dx,dy,map,magic) ;
      }
    }
  }
}

int main(){
  cin >> h >> w >> ch >> cw >> dh >> dw ;
  Gragh map(h,vector<char>(w)) ;
  V_2 magic(h,vector<int>(w,INF)) ;
  magic[ch-1][cw-1] = 0 ;
  for(int i = 0 ; i < h ; i++){
    for(int j = 0 ; j < w ; j++){
      cin >> map[i][j] ;
    }
  }
  //cout << ch-1 << " " << cw-1 << endl ;
  dfs(ch-1,cw-1,map,magic) ;
  cout << magic[dh-1][dw-1] << endl ;
}