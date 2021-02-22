#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int L ;

ll combi(int n, int r){//nCr
  ll p = 1;
  for(int i = 1 ; i <= r ; i++){
    p = p * (n - r + i) / i ;
    //cout << p << endl ;
  }
  return p ;
}

int main(){
  cin >> L ;
  cout << combi(L-1,11) << endl ;
}