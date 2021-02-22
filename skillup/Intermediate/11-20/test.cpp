#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef pair<ll,int> P ;
#define MAX_M (ll)100
#define MAX_N 300
#define INF (ll)1e5

int n , x ;

//降順二分探索lower
int lower_bisect(vector<int> A , int x){
  int lef = 0 , rig = A.size() ;
  int m ;
  while(rig - lef > 0){
    m = (lef + rig) / 2 ;
    if(A[m] == x) return m ;
    if(A[m] > x) lef = m + 1 ;
    if(A[m] < x) rig = m;
  }
  return rig ;
}

//降順二分探索upper
int upper_bisect(vector<int> A , int x){
  int lef = 0 , rig = A.size() ;
  int m ;
  while(rig - lef > 0){
    m = (lef + rig) / 2 ;
    if(A[m] >= x) lef = m + 1 ;
    else rig = m;
  }
  return rig ;
}

int main(){
  cin >> n >> x ;
  vector<int> A ;
  for(int i = 0 ; i < n ; i++){
    int s ;
    cin >> s ;
    A.push_back(s) ;
  }
  sort(A.begin(),A.end(),greater<int>()) ;
  cout << upper_bisect(A,x) << endl ;
}