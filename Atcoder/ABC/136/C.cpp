#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int N ;

int main(){
  cin >> N ;
  ll H[N] ;
  for(int i = 0 ; i < N ; i++) cin >> H[i] ;
  H[0]-- ;
  for(int i = 1 ; i < N ; i++){
    if(H[i] - 1 >= H[i - 1]) H[i]-- ;
    if(H[i] < H[i - 1]){
      cout << "No" << endl ;
      return 0 ;
    }
  }
  cout << "Yes" << endl ;
}