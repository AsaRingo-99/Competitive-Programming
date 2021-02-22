#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n , d ;

int main(){
  cin >> n >> d ;
  int look = 2 * d + 1 ;
  int sum = 0 , count = 0 ;
  while(sum < n){
    count++ ;
    sum += look ;
  }
  cout << count << endl ;
}