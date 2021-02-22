#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int A , B ;

int main(){
  cin >> A >> B ;
  if((B - 1) % (A - 1) != 0) cout << (B - 1) / (A - 1) + 1 << endl ;
  else cout << (B - 1) / (A - 1) << endl ;
}