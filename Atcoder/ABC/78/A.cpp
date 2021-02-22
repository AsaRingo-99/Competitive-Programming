#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

char a , b ;

int main(){
  cin >> a >> b ;
  if(a < b) cout << '<' << endl ;
  else if(a > b) cout << '>' << endl ;
  else cout << '=' << endl ;
}