#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

char n[3] ;

int main(){
  for(int i = 0 ; i < 3 ; i++) cin >> n[i] ;
  if(n[0] == n[2]) cout << "Yes" << endl ;
  else cout << "No" << endl ;
}