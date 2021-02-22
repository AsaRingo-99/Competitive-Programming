#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define INF (ll)1e12

int N , C ;

int main(){
  cin >> N >> C ;
  int tim[100010] ;
  int chan[C][100010] ;
  memset(chan,0,sizeof(chan)) ;
  for(int i = 0 ; i < N ; i++){
    int s , t , c ;
    cin >> s >> t >> c ;
    c-- ; s-- ;
    chan[c][s]++ ; chan[c][t]-- ;
    if(chan[c][s] == 0){
      chan[c][s] = -1 ; chan[c][s+1] = 1 ;
    }
    if(chan[c][t] == 0){
      chan[c][t] = -1 ; chan[c][t+1] = 1 ;
    }
    if(chan[c][s+1] == -1){
      chan[c][s+1] = 0 ; chan[c][s] = 0 ;
    }
    if(chan[c][t-1] == 1){
      chan[c][t-1] = 0 ; chan[c][t] = 0 ;
    }
  }

  int res = 0 , ans = 0 ;
  for(int i = 0 ; i < 100010 ; i++){
    for(int j = 0 ; j < C ; j++){
      res += chan[j][i] ;
    }
    ans = max(ans,res) ;
  }
  cout << ans << endl ;
}