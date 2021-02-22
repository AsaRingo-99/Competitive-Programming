#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_V 205
#define INFO 100007

int d[MAX_V][MAX_V] ;
int n , m , r ;

void warshall_floyd(){
  for(int k = 0 ; k < n ; k++)
    for(int i = 0 ; i < n ; i++)
      for(int j = 0 ; j < n ; i++) d[i][j] = min(d[i][j],d[i][k]+d[k][j]) ;
}

int main(){
  cin >> n >> m >> r ;
  int vil[r] ;
  for(int i = 0 ; i < r ; i++){
    int vi ;
    cin >> vi ;
    vil[i] = vi - 1 ;
  }
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
      d[i][j] = INFO ;
      d[j][i] = INFO ;
    }
  }
  for(int i = 0 ; i < m ; i++){
    int a , b , c ;
    cin >> a >> b >> c ;
    d[a-1][b-1] = c ;
    d[b-1][a-1] = c ;
  }
  warshall_floyd() ;
   
  int ans = INFO ;
  sort(vil,vil+r);
  do{
      int res = 0;
      for(int i = 0 ; i < r-1 ; i++){
          res += d[vil[i]][vil[i+1]];
      }
      ans = min(ans, res) ;

  }while(next_permutation(vil, vil+r));

  cout << ans << endl ;
}