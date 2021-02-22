#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int a , b ;

int main(){
  cin >> a >> b ;
  cout << max(a-b,max(a+b,a*b)) << endl ;
}