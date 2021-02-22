#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;

int N , M ;

int main(){
  cin >> N >> M ;
  priority_queue<ll> que ;
  for(int i = 0 ; i < N ; i++){
    ll A ;
    cin >> A ;
    que.push(A) ;
  }
  int num = 0 ;
  while(num < M){
    ll val = que.top() ;
    val /= 2 ;
    que.pop() ;
    que.push(val) ;
    num++ ;
  }

  ll sum = 0 ;
  while(!que.empty()){
    ll val = que.top() ;
    sum += val ;
    que.pop() ;
  }
  cout << sum << endl ;
}