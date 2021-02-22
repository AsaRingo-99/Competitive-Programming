#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define INF 100005

int n , m ;
int L[INF] , R[INF] ;

int main(){
  cin >> n >> m ;
  for(int i = 0 ; i < m ; i++){
    cin >> L[i] >> R[i] ;
  }
  int r , l ;
  l = 1 ; r = n ;
  for(int i = 0 ; i < m ; i++){
    if(L[i] > l) l = L[i] ;
    if(R[i] < r) r = R[i] ;
  }
  if(l > r) cout << 0 << endl ;
  else cout << r - l + 1 << endl ;
}