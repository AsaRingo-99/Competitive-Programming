#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int N , C ;

void solve(){
  vector<int> x ;
  for(int i = 0 ; i < N ; i++){
    x.push_back(a[i]) ;
    x.push_back(b[i]) ;
  }
  sort(x.begin(),x.end()) ;
  x.erase(unique(x.begin(),x.end()),x.end()) ;

  int m = x.size() ;
  int s = m , t = s + 1 ;
  V = t + 1 ;
  int res = 0 ;
  add_edge(s,0,C,0) ;
  add_edge(m-1,t,C,0) ;
}

int main(){
  cin >> N >> C ;
  int a[N] , b[N] , c[N] ;
  for(int i = 0 ; i < N ; i++) cin >> a[i] >> b[i] >> c[i] ;

}