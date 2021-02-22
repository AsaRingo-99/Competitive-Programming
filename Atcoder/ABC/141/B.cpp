#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

string S ;

int main(){
  cin >> S ;

  bool ok = true ;
  for(int i = 0 ; i < S.size() ; i++){
    if(i % 2 == 0){
      if(S[i] != 'R' && S[i] != 'U' && S[i] != 'D') ok = false ;
    }
    else{
      if(S[i] != 'L' && S[i] != 'U' && S[i] != 'D') ok = false ;
    }
  }
  if(ok) cout << "Yes" << endl ;
  else cout << "No" << endl ;
}