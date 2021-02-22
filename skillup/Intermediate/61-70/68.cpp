#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)1000
#define INF (ll)1e18

int n ;

vector<ll> prime(int n){
  vector<ll> prm ;
  while(true){
    int i = 2 ;
    bool ok = false ;
    while(i * i <= n){
      if(n % i == 0){
        ok = true ;
        n /= i ;
        prm.push_back(i) ;
        break ;
      }
      i++ ;
    }
    if(!ok){
        prm.push_back(n) ;
        return prm ;
    }
  }
}

int main(){
  cin >> n ;
  for(int u : prime(n)) cout << u << endl ;
}