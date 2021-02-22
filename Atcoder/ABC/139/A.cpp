#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

string S , T ;

int main(){
  cin >> S >> T ;
  int sum = 0 ;
  for(int i = 0 ; i < 3 ; i++){
    if(S[i] == T[i]) sum++ ;
  }
  cout << sum << endl ;
}