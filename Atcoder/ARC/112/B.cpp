#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;

ll B , C ;

int main(){
  cin >> B >> C ;
  int res = 0 , tmp = 0 , ans ;
  if(C <= 2 * B){
    res = C / 2 + 1 ;
    if(C % 2 == 1) tmp = res ;
    else tmp = res - 1 ;
    ans = tmp + res ;
  }
  else if(C <= 4 * B + 1){
    ans = 2 * B + 1 ;
  }
  else{
    C -= 4 * B ;
    res = C / 2 ;
    if(C % 2 == 1) tmp = res ;
    else tmp = res - 1 ;
    ans = tmp + res ;
  }
  cout << ans << endl ;
}