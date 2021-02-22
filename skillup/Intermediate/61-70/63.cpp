#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef pair<ll,int> P ;
#define MAX_M (ll)100
#define MAX_N 300
#define INF (ll)1e12

int n ;

int d[MAX_N][MAX_N] ;
int h[MAX_N][MAX_N] ;
bool used[MAX_N][MAX_N] ;

void warshall_floyd(){
  for(int k = 0 ; k < n ; k++)
    for(int i = 0 ; i < n ; i++)
      for(int j = 0 ; j < n ; j++) d[i][j] = min(d[i][j] , d[i][k] + d[k][j]) ;
}

int warshall_floyd2(){
  int count = 0 ;
  for(int k = 0 ; k < n ; k++)
    for(int i = 0 ; i < n ; i++)
      for(int j = 0 ; j < n ; j++){
        if(d[i][j] == d[i][k] + d[k][j]){
          if(used[i][j]){
            used[i][k] = true ;
            used[k][j] = true ;
            continue ;
          }
          if(!used[i][k]) count += d[i][k] ;
          if(!used[k][j]) count += d[i][k] ;
          used[i][j] = true ;
          used[i][k] = true ;
          used[k][j] = true ;
        }
      }
}

int main(){
  cin >> n ;
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
      int s ;
      cin >> s ;
      d[i][j] = s ;
      h[i][j] = s ;
    }
  }

}