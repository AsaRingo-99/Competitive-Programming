#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int k , x ;

int main(){
  cin >> k >> x ;
  int p = k - 1 ;
  for(int i = x - p ; i <= x + p ; i++){
    cout << i << " " ;
  }
  cout << endl ;
}