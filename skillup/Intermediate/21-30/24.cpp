#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)100
#define MAX_N (ll)100
#define INF (ll)1e18

int n ;
bool V[MAX_N][MAX_N] ;
int d[MAX_N][MAX_N] ;

int dfs(int s){
  stack<int> st ;
  st.push(s) ;
  while(!st.empty()){
    int v = st.top() ;
    st.pop() ;
    
  }
}

int main(){
  cin >> n ;
  for(int i = 0 ; i < n ; i++) fill(V[i],V[i]+n,false) ;
  for(int i = 0 ; i < n ; i++){
    int u , k ;
    cin >> u >> k ;
    for(int j = 0 ; j < k ; j++){
      int t ;
      cin >> t ;
      V[u][t] = true ;
    }
  }

}