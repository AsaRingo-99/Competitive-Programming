#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef pair<int,int> P ;
#define MAX_M (ll)100
#define MAX_N 50
#define INF (ll)1e18

int main(){
  int c[3][3] ;
  for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 ; j++) cin >> c[i][j] ;
  }
  int tmp = 0 , res = 0 ;
  for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 ; j++){
      if(i == j) tmp += c[i][i] ;
      res += c[i][j] ;
    }
  }
  if(3 * tmp == res) cout << "Yes" << endl ;
  else cout << "No" << endl ;
}