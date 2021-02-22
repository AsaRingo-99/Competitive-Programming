#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define INF 100

int n , k ;
int deq[INF] ;

int main(){
  cin >> n >> k ;
  for(int i = 0 ; i < n ; i++){
    cin >> deq[i] ;
  }
  priority_queue<int> Q ;
  int lef = 0 , rig = n - 1 , count = 0 , sum = 0 ;
  while(true){
    sum += deq[lef] + deq[rig] ;
    Q.push(deq[lef])
    Q.push()
    count += 2 ;
    if(count < k)
  }
}