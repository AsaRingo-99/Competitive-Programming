#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)100
#define MAX_N (ll)100
#define INF (ll)1e9

string S ;
int n ;

int main(){
  cin >> n >> S ;

  ll res = 0 ;
  for(int i = 0 ; i < 1000 ; i++){
    char s1 , s2 , s3 ;
    if(i < 10){
    s1 = '0' ; s2 = '0' ; s3 = (char) i ;
    }
    else if(i < 100){
      string T = to_string(i) ;
    s1 = '0' ; s2 = T[0] ; s3 = T[1] ;
    }
    else{
      string T = to_string(i) ;
      s1 = T[0] ; s2 = T[1] ; s3 = T[2] ;
    }
    int j = 0 ;
    while(j < n && S[j] != s1) j++ ;
    j++ ;
    while(j < n && S[j] != s2) j++ ;
    j++ ;
    while(j < n && S[j] != s3) j++ ;
    if(j < n) res++ ;
  }
  cout << res << endl ;
}