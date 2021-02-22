#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)200
#define MAX_N (ll)1e6+1
#define INF (ll)1e16

int m , n ;
bool C[MAX_N][MAX_N] ;

int main(){
  cin >> m ;
  pair<int,int> d[m-1] ;
  int s , t ;
  cin >> s >> t ;
  int tmpx = s , tmpy = t ;
  for(int i = 0 ; i < m - 1 ; i++){
    int p , q ;
    cin >> p >> q ;
    d[i].first = p - s ; d[i].second = q - t ;
    s = p ; t = q ;
  }

  cin >> n ;
  pair<int,int> pir[n] ;
  for(int i = 0 ; i < n ; i++){
    int p , q ;
    cin >> p >> q ;
    pir[i].first = p ; pir[i].second = q ;
    C[p][q] = true ;
  }

  int resx = 0 , resy = 0 ;
  for(int i = 0 ; i < n ; i++){
    bool ok = true ;
    int x = pir[i].first , y = pir[i].second ;
    int rex = x , rey = y ;
    for(int j = 0 ; j < m - 1 ; j++){
      int dx = d[j].first , dy = d[j].second ;
      x += dx ; y += dy ;
      if(0 > x || x > MAX_N || 0 > y || y > MAX_N || !C[x][y]) ok = false ;
    }
    if(ok){
      resx = rex - tmpx ;
      resy = rey - tmpy ;
    }
  }
  cout << resx << " " << resy << endl ;
}