#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

ll x , y ;
ll a , b ;

int main(){
  int count = 0 ;
  double logx , logex ;
  double n ;
  cin >> x >> y >> a >> b ;
  ll ex = x ;
  double A = a ;
  double B = b ;
  double e = x ;
  double s = e-e/A ;
  
  logx = log10(B) - log10(s) ;
  
  logex = log10(a) ;
  
  n = logx / logex  ;
  cout << log10(B) << endl ;
  int N = n ;
  count = count + N ;

  ex = ex * pow(x,N) ;

  ll re = y - ex - 1 ;
  re = re / b ;
  count += re ;
  cout << count << endl ;

}