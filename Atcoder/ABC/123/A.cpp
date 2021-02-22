#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define INF (ll)1e12

int x , y , z ;
ll k ;

int main(){
  cin >> x >> y >> z >> k ;
  ll A[x] , B[y] , C[z] ;
  for(int i = 0 ; i < x ; i++) cin >> A[i] ;
  for(int i = 0 ; i < y ; i++) cin >> B[i] ;
  for(int i = 0 ; i < z ; i++) cin >> C[i] ;
  int yz = y * z ;
  ll D[yz] ;
  for(int i = 0 ; i < y ; i++){
    for(int j = 0 ; j < z ; j++){
      D[y * i + j] = B[i] + C[j] ;
    }
  }
  cout << endl ;
  sort(D,D+yz,greater<ll>()) ;
  sort(A,A+x,greater<ll>()) ;
  ll xyz = x * y * z ;
  cout << xyz << endl ;
  ll E[xyz] ;
  fill(E,E+min(k,xyz),0) ;
  for(int i = 0 ; i < min(k,xyz) ; i++){
    for(int j = 0 ; j < x ; j++){
      E[i * min(k,xyz) + j] = D[i] + A[j] ;
    }
  }
  sort(E,E+min(xyz,k),greater<ll>()) ;
  for(int i = 0 ; i < k ; i++) cout << E[i] << endl ;
}