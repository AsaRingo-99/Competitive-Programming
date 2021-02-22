#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

vector<ll> divisor(ll n) {
    vector<ll> ret;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    return ret;
}

int n ;

int main(){
  cin >> n ;
  int A[n+1] ;
  bool B[n+1] ;
  fill(B,B+n+1,false) ;
  map<int,int> S ;
  for(int i = 1 ; i <= n ; i++){
    cin >> A[i] ;
    S[i] = 0 ;
  }
  int count = 0 ;
  for(int i = n ; i >= 1 ; i--){
    if(S[i] % 2 == A[i]) continue ;
    vector<ll> DIV = divisor(i) ;
    for(auto u : DIV) S[u]++ ; 
    B[i] = true ;
    count++ ;
  }
  cout << count << endl ;
  for(int i = 1 ; i <= n ; i++){
    if(B[i]) cout << i << " " ; 
  }
  cout << endl ;
  //for(int i = 1 ; i <= n ; i++) cout << B[i] << endl ;
}