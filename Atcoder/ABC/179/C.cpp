#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using Gragh = vector<vector<char>> ;
using P = pair<int,int> ;
using ll = long long ;

int main(){
  int n ; 
  int count = 0 ;
  cin >> n ;

  for(int a = 1 ; a < n ; a++){
    for(int b = 1 ; b < n ; b++){
      if(a * b < n){
        count++ ;
      }
      else break ;
    }
  }

  cout << count << endl ;
}