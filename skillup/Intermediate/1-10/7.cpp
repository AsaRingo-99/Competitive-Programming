#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)100
#define MAX_N 5000
#define INF (ll)1e9

int n ;
bool C[MAX_N + 1][MAX_N + 1] ;

int main(){
  cin >> n ;
  pair<int,int> A[n] ;

  //初期化
  for(int i = 0 ; i <= MAX_N ; i++) fill(C[i],C[i]+MAX_N+1,false) ;

  for(int i = 0 ; i < n ; i++){
    int x , y ;
    cin >> x >> y ;
    C[x][y] = true ;
    A[i].first = x ; A[i].second = y ;
  }
  sort(A,A+n) ;
  //全探索
  ll ans = 0 ;
  for(int i = 0 ; i < n ; i++){
    for(int j = i + 1 ; j < n ; j++){
      bool ok = false ;
      int x1 = A[i].first , y1 = A[i].second , x2 = A[j].first , y2 = A[j].second ;
      ll dx = x2 - x1 , dy = y2 - y1 ;
      int x3 = x1 + dy , y3 = y1 - dx ;
      int x4 = x2 + dy , y4 = y2 - dx ;
      if(C[x3][y3] && C[x4][y4] && x3 <= MAX_N && x4 <= MAX_N && y3 <= MAX_N && y4 <= MAX_N && x3 >= 0 && x4 >= 0 && y3 >= 0 && y4 >= 0) ok = true ;
      if(ok) ans = max(ans,dx * dx + dy * dy) ;
    }
  }
  cout << ans << endl ;
}