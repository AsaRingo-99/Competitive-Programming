#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int N ;

int main(){
  cin >> N ;
  map<string,int> res ;
  vector<string> ST ;
  for(int i = 0 ; i < N ; i++){
    string S ;
    cin >> S ;
    sort(S.begin(),S.end()) ;
    if(res[S] == 0) ST.push_back(S) ;
    res[S]++ ;
  }
  ll count = 0 ;
  for(string s : ST){
    ll tmp = res[s] ;
    count += tmp * (tmp - 1) / 2 ;
  }
  cout << count << endl ;
}