#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int N , K , Q ;

int main(){
  cin >> N >> K >> Q ;
  ll rem[N] ;
  fill(rem,rem+N,K-Q) ;
  for(int i = 0 ; i < Q ; i++){
    int A ;
    cin >> A ;
    rem[A-1]++ ;
  }
  for(int i = 0 ; i < N ; i++){
    if(rem[i] > 0) cout << "Yes" << endl ;
    else cout << "No" << endl ;
  }
}