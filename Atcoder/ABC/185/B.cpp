#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n , m , t ;

int main(){
  cin >> n >> m >> t ;
  int front = 0 ;
  int sum = n ;
  for(int i = 0 ; i < m ; i++){
    int a , b ;
    cin >> a >> b ;
    sum -= (a - front) ;
    if(sum <= 0){
      cout << "No" << endl ;
      return 0 ;
    }
    sum += (b - a) ;
    if(sum > n) sum = n ;
    front = b ;
  }
  sum -= (t - front) ;
  if(sum > 0) cout << "Yes" << endl ;
  else cout << "No" << endl ;
}