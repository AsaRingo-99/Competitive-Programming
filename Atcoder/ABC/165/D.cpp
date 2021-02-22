#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

ll A , B , N ;

int main(){
  cin >> A >> B >> N ;
  ll rng = B / A ;
  if(B % A == 0) rng-- ;
  ll x ;
  if(N % B <= rng){
    if(N >= B) x = (int)(N / B) * B - 1 ;
    else x = N ;
  }
  else{
    x = N ;
  }
  cout << (int)(A * x / B) - A * (int)(x / B) << endl ;
}