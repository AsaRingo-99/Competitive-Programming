#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef pair<ll,int> P ;
#define MAX_N (ll)1e6
#define INF (ll)1e16

int n , m ;

int main(){
  cin >> n >> m ;
  bool res[n] ;
  fill(res,res+n,false) ;
  int count = 0 ;
  for(int i = 0 ; i < m ; i++){
    int x , y , z ;
    cin >> x >> y >> z ;
    if(!res[x-1] && !res[y-1]){
      count++ ;
      res[x-1] = true ;
      res[y-1] = true ;
    }
    else{
      res[x-1] = true ;
      res[y-1] = true ;
    }
  }
  for(int i = 0 ; i < n ; i++){
    if(res[i]) continue ;
    cout << i << " " << endl ;
    count++ ;
  }
  cout << endl;
  cout << count << endl ;
}