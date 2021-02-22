#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

string S ;

int main(){
  cin >> S ;

  int child[M] ;
  fill(child,child+M,0) ;

  int i = 0 , k = 0 ;
  while(i + k < S.size()){
    int per1 = 0 , per2 = 0 , k = 0 ;
    while(S[i + k] == 'R' && i + k < S.size()){
      if(k % 2 == 0) per1++ ;
      else per2++ ;
      k++ ;
    }
    int left = i + k - 1 , right = i + k ;
    bool ok = false ;
    if(k % 2 == 0) ok = true ;
    while(S[i + k] == 'L' && i + k < S.size()){
      if(k % 2 == 0) per1++ ;
      else per2++ ;
      k++ ;  
    }
    if(ok){
      child[right] += per1 ;
      child[left] += per2 ;
    }
    else{
      child[left] += per1 ;
      child[right] += per2 ;
    }
    i += k ;
  }
  for(int i = 0 ; i < S.size() ; i++) cout << child[i] << " " ;
  cout << endl ;
}