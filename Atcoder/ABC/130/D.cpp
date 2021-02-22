#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int n ;
ll k ;

int main(){
  cin >> n >> k ;
  int a[n] ;
  for(int i = 0 ; i < n ; i++){
    cin >> a[i] ;
  }

  int right = 0 , left = 0 ;
  bool running = true , done = false ;
  int count = 1 ;
  ll sum = 0 , res = 0 ;

  while(true){
    if((done && running && right == n) || (right == n && sum < k)) break ;
    if(running){
      sum += a[right] ;
      right++ ;
      if(sum >= k){
        running = false ;
        res += count ;
      }
    }
    if(!running){
      if(sum - a[left] >= k){
        sum -= a[left] ;
        left++ ;
        res++ ;
        count++ ;
      }
      else{
        running = true ;
        done = true ;
      }
    }
  }
  cout << res << endl ;
}