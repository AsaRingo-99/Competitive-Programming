#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef pair<ll,int> P ;
#define MAX_M (ll)100
#define MAX_N (ll)1e5
#define INF (ll)1e12

int Q ;
bool primenumber[MAX_N] ;
int primecount[MAX_N] ;

void init(){
  for(int i = 0 ; i <= MAX_N ; i++) primenumber[i] = true ;
  primenumber[0] = primenumber[1] = false ;
  for(int i = 2 ; i <= MAX_N ; i++){
    if(primenumber[i]){
      for(int j = i * 2 ; j <= MAX_N ; j += i) primenumber[j] = false ;
    }
  }
}

void init2(){
  primecount[0] = 0 ;
  primecount[1] = 0 ;
  for(int i = 3 ; i <= MAX_N ; i += 2){
    int j = (i + 1) / 2 ;
    if(primenumber[i] && primenumber[j]) primecount[i] = primecount[i-2] + 1 ;
    else primecount[i] = primecount[i-2] ;
  }
}

int main(){
  init() ;
  init2() ;
  cin >> Q ;
  for(int i = 0 ; i < Q ; i++){
    int l , r ;
    cin >> l >> r ;
    int j = (l + 1) / 2 ;
    int ans = primecount[r] - primecount[l] ;
    if(primenumber[l] && primenumber[j]) ans += 1 ;
    cout << ans << endl ;
  }
}