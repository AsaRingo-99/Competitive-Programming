#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
#define MAX_N (ll)1e9

long long n ;

vector<long long> enum_divisors(long long N) {
    vector<long long> res;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            // 重複しないならば i の相方である N/i も push
            if (N/i != i) res.push_back(N/i);
        }
    }
    // 小さい順に並び替える
    sort(res.begin(), res.end());
    return res;
}


int main(){
  cin >> n ;
  vector<long long> K = enum_divisors(n) ;
  long long res = 0 ;

  for(long long u : K){
  if((2 * n/u - 1 - u) % 2 == 0) res++ ;
  }
  cout << res * 2 << endl ;
}