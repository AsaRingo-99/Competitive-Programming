#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)90
#define INF (ll)1e18

int m , n ;
//vector<vector<bool>> copyice(MAX_N,vector<bool>(MAX_N,false)) , ice ;
bool copyice[MAX_N][MAX_N] , ice[MAX_N][MAX_N] ;
int dx[4] = {-1,0,1,0} , dy[4] = {0,-1,0,1} ;

ll dfs(int x , int y , int count){
  if(!ice[x][y]) return count ;
  count++ ;
  ice[x][y] = false ;
  ll res = 0 ;
  for(int d : {0,1,2,3}){
      int nx = x + dx[d] , ny = y + dy[d] ;
      if(0 <= nx && nx < n && 0 <= ny && ny < m) res = max(res,dfs(nx,ny,count)) ;
    }
  ice[x][y] = true ;
  return res ;
}

int main(){
  cin >> m >> n ;
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
      int s ;
      cin >> s ;
      if(s == 1) ice[i][j] = true ;
      else ice[i][j] = false ;
    } 
  }

  ll count = 0 ;
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
      if(ice[i][j]){
        count = max(count,dfs(i,j,0)) ;
      }
    }
  }
  cout << count << endl ;
}