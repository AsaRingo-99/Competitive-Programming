#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n ;

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
   int n ;
   cin >> n ;
   ll T[n] ;
   for(int i = 0 ; i < n ; i++){
     cin >> T[i] ;
   }
   ll res = T[0] ;
   for(int i = 1 ; i < n ; i++){
     res = lcm(res,T[i]) ;
   }
   cout << res << endl ;
}