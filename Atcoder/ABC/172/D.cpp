#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int yaku(int S)
{
  int count = 0 ;
  for(int i = 1 ; i < S/2+1 ; i++){
    if(S % i == 0) count = count + 1 ;
  }
  return count+1 ;
}

int main()
{
  long long ans = 0 ;
  int A ;
  cin >> A ;
  for(int i = 1 ; i < A + 1 ; i++) ans = ans + yaku(i) * i ;
  cout << ans << endl ;
}