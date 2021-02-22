#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

string S ;

int main(){
  cin >> S ;
  if(S[0] == S[1] && S[1] == S[2]) cout << "Won" << endl ;
  else cout << "Lost" << endl ;
}