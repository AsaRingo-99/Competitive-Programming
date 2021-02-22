#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;

int n , m , ans ;

int main(){
  int count_w = 0 , count_r = 0 ;
  cin >> n ; 
  char c[n] ;
  if(n % 2 == 0) m = (n - 1) / 2 ;
  else m = n / 2 ;
  for(int i = 0 ; i < n ; i++){
    cin >> c[i] ;
    if(i <= m && c[i] == 'W')
    count_w = count_w + 1 ;
    else if(i > m && c[i] == 'R')
    count_r = count_r + 1 ;
  }
  cout << min(count_r,count_w) + abs(count_r - count_w) << endl ;
}