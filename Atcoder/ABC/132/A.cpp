#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

string S ;

int main(){
  cin >> S ;
  sort(S.begin(),S.end()) ;
  if(S[0] == S[3]) cout << "No" << endl ; 
  else if(S[0] == S[1] && S[2] == S[3] ) cout << "Yes" << endl ;
  else cout << "No" << endl ;
}