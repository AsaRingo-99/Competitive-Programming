#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n , k ;

int main(){
  cin >> n >> k ;
  int x[n] ;
  int sum = 0 ;
  for(int i = 0 ; i < n ; i++){
    int s ;
    cin >> s ;
    sum += min(s,abs(s-k)) * 2 ;
  }
  cout << sum << endl ;
}