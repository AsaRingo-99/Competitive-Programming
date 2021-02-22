#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define INF 10007

int n , m ;
ll A[INF] , B[INF] , C[INF] ;

int main(){
  cin >> n >> m ;
  ll sum = 0 ;
  pair<ll,int> P[m] ;
  for(int i = 0 ; i < n ; i++){
    cin >> A[i] ;
  }
  for(int i = 0 ; i < m ; i++){
    int b ; ll c ;
    cin >> b >> c ;
    P[i].first = c ;
    P[i].second = b ;
  }
  sort(P,P+m) ;
  sort(A,A+n) ;
  int j = 0 , i = 0 ;
  while(i + j < n){
    if(m - 1 - j < 0){
      while(i + j < n){
        sum += A[n - 1 - i] ;
        i++ ;
      }
    }
    if(A[n - 1 - i] < P[m - 1 - j].first){
      P[m - 1 - j].second-- ;
      sum += P[m - 1 - j].first ;
      if(P[m - 1 - j].second == 0) j++ ;
    }
    else{
      sum += A[n - 1 - i] ;
      i++ ;
    }
  }

  cout << sum << endl ;
}