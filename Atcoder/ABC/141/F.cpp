#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;

int n ;

ll powll(int k){
  ll res = 1 ;
  for(int i = 0 ; i < k ; i++){
    res *= 2 ;
  }
  return res ;
}

int main(){
  cin >> n ;
  vector<int> A ;
  bool red[60] , blue[60] ;
  for(int i = 0 ; i < n ; i++){
    int a ;
    cin >> a ;
    A.push_back(a) ;
  }
  sort(A.begin() , A.end() , greater<int>()) ;
  for(int i = 0 ; i < 60 ; i++){
    if(A[0] >> i)
  }
}