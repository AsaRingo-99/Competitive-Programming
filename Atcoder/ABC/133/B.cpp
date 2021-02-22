#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n , d ;

bool is_integer( double x ){
  return floor(x)==x;
}

int main(){
  cin >> n >> d ;
  int x[n][d] ;
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < d ; j++){
      cin >> x[i][j] ;
    }
  }
  int count = 0 ;
  for(int i = 0 ; i < n ; i++){
    for(int j = i + 1 ; j < n ; j++){
      int sum = 0 ;
      for(int k = 0 ; k < d ; k++){
        sum += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]) ;
      }
      if(is_integer(sqrt(sum))) count++ ;
    }
  }
  cout << count << endl ;
}