#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define INF 10007

int n , m ;

vector<int> swich[INF] ;

int p[INF] ;
int ss[10] ;

int main(){
  cin >> n >> m ;
  for(int i = 0 ; i < m ; i++){
    int k ;
    cin >> k ;
    for(int j = 0 ; j < k ; j++){
      int t ;
      cin >> t ;
      swich[i].push_back(t) ;
    }
  }
  for(int i = 0 ; i < m ; i++){
    cin >> p[i] ;
  }

  int res = 0 ;
  for(int i = 0 ; i < 1 << n ; i++){
    int ok = 0 ;
    memset(ss,0,sizeof(ss)) ;
    for(int j = 0 ; j < n ; j++){
      ss[n - 1 - j] = i >> j & 1 ;
    }
    for(int k = 0 ; k < m ; k++){
      int sumv = 0 ;
      for(int val : swich[k]){
        sumv += ss[val-1] ;
      }
      if(sumv % 2 == p[k]) ok++ ;
      if(ok == m){
        res++ ;
        ok = 0 ;
      }
    }
  }
  cout << res << endl ;
}