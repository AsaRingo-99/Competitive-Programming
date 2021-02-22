#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n , m ;

int main(){
  cin >> n >> m ;
  int A[m] ;
  if(m == 0){
    cout << n << endl ;
    return 0 ;
  }
  vector<int> B ;
  for(int i = 0 ; i < m ; i++){
    int val ;
    cin >> val ;
    A[i] = val -1 ;
  }
  sort(A,A+m) ;
  //cout << endl ;
  ll start = 0 , fin = n - 1 , minsize = n + 1 ;
  for(int i = 0 ; i <= m ; i++){
    if(i == 0){
      if(A[i] - start > 0){
        B.push_back(A[i] - start) ;
        minsize = min(minsize,A[i] - start) ;     
        //cout << A[i] - start << " " << A[i] << endl ;   
      }
    }
    else if(i == m && fin - start > 0){
      B.push_back(fin - start) ;
      minsize = min(minsize,fin-start) ;
      //cout << fin - start << endl ;
    }
    else if(i == m) break ;

    //cout << A[i] - start - 1  << endl ;
    else if(A[i] - start - 1 > 0){
      
      B.push_back(A[i] - start - 1) ;
      minsize = min(minsize,A[i]-start-1) ;
      //cout << A[i] - start - 1 << " " << A[i] << endl ;
    }
    start = A[i] ;
  }
  if(minsize == n + 1){
    cout << 0 << endl ;
    return 0 ;
  }
  //cout << minsize << endl ;
  int sum = 0 ;
  for(int u : B){
    if(u % minsize == 0) sum += u / minsize ;
    else sum += u / minsize + 1 ;
  }
  cout << sum << endl ;
}