#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n , m ;

int main(){
  cin >> n >> m ;

  int cd[m + 1] ;
  fill(cd,cd+m+1,0) ; 
  pair<int,int> work[n] ;
  for(int i = 0 ; i < n ; i++) cin >> work[i].second >> work[i].first ;
  sort(work,work+n) ;
  ll count = 0 ;
  ll res = m ;
  ll value = 0 ;
  for(int i = 0 ; i < n ; i++){
    if(work[n - 1 - i].second == res && count < m){
      res-- ;
      value += work[n - 1 - i].first ;
      count++ ;
    }
    else if(work[n - 1 - i].second < res && count < m){
      value += work[n - 1 - i].first ;
      count++ ;
    }
  }
  cout << value << endl ;
}