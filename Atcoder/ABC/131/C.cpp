#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

ll a , b ,c , d ;

ll gcd(ll a, ll b){
   if (a%b == 0) return(b) ;
   else return(gcd(b, a%b)) ;
}
ll lcm(ll a, ll b){
  if(b % a == 0 || b % a == 0){
    return max(a,b) ;
  }
   return a / gcd(a, b) * b ;
}

int main(){
  cin >> a >> b >> c >> d ;
  ll LCM = lcm(c,d) ;
  ll ans = b - a + 1 ;
  ans = ans - b / c + (a - 1) / c ;
  ans = ans - b / d + (a - 1) / d ;
  ans = ans + b / LCM - (a - 1) / LCM ;
  cout << ans << endl ;
}