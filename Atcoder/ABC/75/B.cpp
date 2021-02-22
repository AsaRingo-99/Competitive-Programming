#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int H , W ;

int main(){
  cin >> H >> W ;
  char B[H][W] ;
  int cnt[H][W] ;
  for(int i = 0 ; i < H ; i++){
    for(int j = 0 ; j < W ; j++){
      cin >> B[i][j] ;
      cnt[i][j] = 0 ;
    }
  }
  for(int i = 0 ; i < H ; i++){
    for(int j = 0 ; j < W ; j++){
      if(B[i][j] == '#'){
        for(auto dx : {-1,0,1}){
          for(auto dy : {-1,0,1}){
            if(B[i+dx][j+dy] == '#' || i+dx<0 || i+dx>=H || j+dy<0 || j+dy>=W || (dx == 0 && dy == 0)) continue ;
            cnt[i+dx][j+dy]++ ;
          }
        }
      }
    }
  }
  for(int i = 0 ; i < H ; i++){
    for(int j = 0 ; j < W ; j++){
      if(B[i][j] == '#') cout << '#' ;
      else cout << cnt[i][j] ;
    }
    cout << endl ;
  }
}