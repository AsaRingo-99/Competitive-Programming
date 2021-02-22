#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int N , L ;

int main(){
  int sum = 0 ;
  cin >> N >> L ;
  for(int i = 0 ; i < N ; i++){
    sum += (L + i) ;
  }
  cout << sum << endl ;
  int margin = sum + 1 ;
  int mar ;
  for(int i = 0 ; i < N ; i++){
    if(abs(abs(sum) - abs(sum - L - i)) < margin){
      margin = sum - (L + i) ;
      mar = L + i ;
    }
  }
  cout << sum - mar << endl ; 
}