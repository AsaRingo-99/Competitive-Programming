#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n , k ;

int main(){
  cin >> n >> k ;
  pair<ll,ll> P[n] ;
  for(int i = 0 ; i < n ; i++) cin >> P[i].first >> P[i].second ;
  sort(P,P+n) ;

  ll squ = 0 ;

  for(int i = 0 ; i < n - 1 ; i++){
    for(int j = i + 1 ; j < n ; j++){
      if(j - i < k) continue ;

    }

  }
}