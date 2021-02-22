#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n , k ;

int gcd(int a, int b){
  if (a%b == 0) return(b) ;
  else return(gcd(b, a%b)) ;
}

vector<ll> divisor(ll n) {
    vector<ll> ret;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    //sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}

int main(){
  cin >> n >> k ;
  int A[n] ;
  int tmp = 1e6 + 1 ;
  for(int i = 0 ; i < n ; i++){
    cin >> A[i] ;
    tmp = min(tmp,A[i]) ;
  }
  vector<ll> res = divisor(tmp) ;
  for(auto u : res){
    int inc = 0 , dec = 0 ;
    for(int i = 0 ; i < n ; i++){
      int mod = A[i] % u ;
    }
  }
}