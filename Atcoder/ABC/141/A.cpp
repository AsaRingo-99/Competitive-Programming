#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

string S ;

int main(){
  cin >> S ;
  if(S[0] == 'S') cout << "Cloudy" << endl ;
  if(S[0] == 'C') cout << "Rainy" << endl ;
  if(S[0] == 'R') cout << "Sunny" << endl ;
}