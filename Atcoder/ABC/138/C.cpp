#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int N ;
priority_queue<double,vector<double>,greater<double> > que ;

int main(){
  cin >> N ;
  for(int i = 0 ; i < N ; i++){
    int s ;
    cin >> s ;
    que.push(s) ;
  }
  while(que.size() > 1){
    double u1 = que.top() ; que.pop() ;
    double u2 = que.top() ; que.pop() ;
    double sum = (u1 + u2) / 2 ;
    que.push(sum) ;
  }
  double ans = que.top() ;
  cout << ans << endl ;
}