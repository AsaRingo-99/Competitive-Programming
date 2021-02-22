#include <bits/stdc++.h>
using namespace std ;

int main()
{
  vector<int> ans ;
  int n,count,cnt ;
  count = 0 ;
  cnt = 1 ;
  cin >> n ;
  int A[n] ;
  for(int i = 0 ; i < n ; i++) cin >> A[i] ;
  sort(A, A + n, greater<int>()) ;
  ans.push_back(A[0]) ;
  for(int i = 1 ; i < n ; i++){
    if(A[i] == A[i-1]) count = count + A[i] ;
    else{
      ans.push_back(A[i]) ;
      cnt = cnt + 1 ;
    }
  }
  if(cnt % 2 == 1 && cnt != 1){
    cnt = cnt + 1 ;
    for(int i = 0 ; i < cnt/2 ; i++){
      if(i == 0 || i == cnt/2 - 1) count = count + ans[i] ;
      else count = count + ans[i] * 2 ;
    }
  }
  cout << count << endl ;
}