#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int t , n , s , k ;

int main(){
  cin >> t ;
  for(int i = 0 ; i < n ; i++){
    cin >> n >> s >> k ;
    int king = n - s ;
    if((n-s) % k == 0){
      cout << (n - s) / k << endl ;
      continue ;
    }
    int count = (n - s) / k ;
    if(((n+1)*(n%k+1)-king)%(n%k) == 0) count +  
  }
}