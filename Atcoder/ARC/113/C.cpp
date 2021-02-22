#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define INF (ll)1e12

string S ;
string ALF = "abcdefghijklmnopqrstuvwxyz" ;

int main(){
  map<char,int> alf ;
  for(char u : ALF) alf[u] = 0 ;
  cin >> S  ;
  int n = S.size() ;
  int i = 0 ;
  ll count = 0 ;
  while(true){
    if(i == n - 1) break ;
    if(S[n-1-i] != S[n-2-i]) alf[S[n-1-i]]++ ;
    else{
      count += i - alf[S[n-1-i]] ;
      for(char u : ALF) alf[u] = 0 ;
      alf[S[n-1-i]] = i + 1 ;
    }
    i++ ;
  }
  cout << count << endl ;
}