#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define INF 10007

int n , m ;
ll A[INF] , B[INF] , C[INF] ;
priority_queue<int,vector<int>,greater<int>> Q ;

int main(){
  cin >> n >> m ;
  ll sum = 0 ;
  for(int i = 0 ; i < n ; i++){
    ll val ;
    cin >> val ;
    Q.push(val) ;
    sum += val ;
  }
  for(int i = 0 ; i < m ; i++){
    int b ; ll c ;
    cin >> b >> c ;
    for(int j = 0 ; j < b ; j++){
      if(Q.top() > c) break ;
      sum -= Q.top() ;
      sum += c ;
      Q.pop() ;
      Q.push(c) ;
    }
  }
  cout << sum << endl ;
}