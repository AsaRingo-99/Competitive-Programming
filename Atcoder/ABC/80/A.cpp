#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define INF (ll)1e12

int n , a , b ;

int main(){
  cin >> n >> a >> b ;
  if(a * n < b) cout << a * n << endl ;
  else cout << b << endl ;
}