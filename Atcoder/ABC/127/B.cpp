#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int r , D , x ;

int main(){
  cin >> r >> D >> x ;
  for(int i = 1 ; i <= 10 ; i++){
    x = r * x - D ;
    cout << x << endl ; 
  }
}