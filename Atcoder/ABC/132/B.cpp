#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 20

int n ;
int A[M] ;

int main(){
  cin >> n ;
  for(int i = 0 ; i < n ; i++) cin >> A[i] ;
  int fir = 0 , sec = 1 , thi = 2 , count = 0;
  for(int i = 0 ; i < n - 2 ; i++){
    if((A[fir] < A[sec] && A[sec] < A[thi]) || (A[fir] > A[sec] && A[sec] > A[thi]) ) count++ ;
    fir++ ; sec++ ; thi++ ;
  }
  cout << count << endl ;
}