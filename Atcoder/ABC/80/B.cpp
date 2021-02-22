#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define INF (ll)1e12

string S ;

int main(){
  cin >> S ;
  ll N = stoi(S) ;
  int sum = 0 ;
  for(char u : S) sum += u - '0' ;
  if(N % sum == 0) cout << "Yes" << endl ;
  else cout << "No" << endl ;
}