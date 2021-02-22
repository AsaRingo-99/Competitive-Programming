#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)30
#define MAX_N (ll)6
#define INF (ll)1e8

string S ;

int main(){
  cin >> S ;
  int res = 0 ;
  int tmp = 0 ;
  for(char u : S){
    if(u == 'A' || u == 'C' || u == 'G' || u== 'T') tmp++ ;
    else tmp = 0 ;
    res = max(tmp,res) ;
  }
  cout << res << endl ;
}