#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n ;

int main(){
  cin >> n ;
  int count = 0 ;

  for(int i = 1 ; i <= n ; i++){
    bool ok = true ;
    std::stringstream ss;
    ss << std::oct << i;
    std::string s = ss.str();
    for(char u : s){
      if(u == '7'){
        ok = false ;
        break ;
      }
    }
    if(!ok) continue ;
    std::stringstream tt;
    tt << std::dec << i;
    std::string t = tt.str(); // "99"
    for(char u : t){
      if(u == '7'){
        ok = false ;
        break ;
      }
    }
    if(ok) count++ ;
  }
  cout << count << endl ;
}