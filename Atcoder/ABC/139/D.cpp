#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

ll n ;

int main(){
  cin >> n ;
  ll sum ;
  if(n % 2 == 0) sum = n / 2 * (n-1) ;
  else sum = (n - 1) / 2 * n ;
  cout << sum << endl ;
}