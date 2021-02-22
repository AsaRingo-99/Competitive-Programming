#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

string S ;

int main(){
  cin >> S ;
  sort(S.begin(),S.end()) ;
  char s = '0' ;
  bool ok = false ;
  for(char u : S){
    if(s != u && ok){
      cout << s << endl ;
      return 0 ;
    }
    else if(s != u){
      s = u ;
      ok = true ;
    }
    else ok = false ;
  }
  cout << "None" << endl ;
}