#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

char a[4] ;

int main(){
  int save = -1 ;
  for(int i = 0 ; i < 4 ; i++){
    cin >> a[i] ;
    if(save == a[i]){
      cout << "Bad" << endl ;
      return 0 ;
    }
    save = a[i] ;
  }
  cout << "Good" << endl ; 
}