#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

ll n ;

int main(){
  cin >> n ;
  int k = n / 10 ;
  if(k >= 1 && k < 10 &&(n == 11 || n == 22 || n == 44 || n == 55 || n == 77 || n == 88)){
    cout << -1 << endl ;
    return 0 ;
  }
  if(n % 3 == 0) cout << 0 << endl ;
  else cout << 1 << endl ;
}