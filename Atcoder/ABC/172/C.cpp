#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main()
{
  int N,M ;
  long long K ;
  cin >> N >> M >> K ;
  long long A[N] ;
  long long B[M] ;
  for(int i = 0 ; i < N ; i++) cin >> A[i] ;
  for(int i = 0 ; i < M ; i++) cin >> B[i] ;
  int TT = 0 ;
  int i = 0 ;
  int j = 0 ;
  int count = 0 ;
  long long time = 0 ;

  while(time <= K){
    if(i == N && j == M){
      count = count + 1 ;
      break ;
    } 

    if(i == N){
      time = time + B[j] ;
      j = j + 1 ;
      count = count + 1 ;
    }
    else if(j == M){
      time = time + A[i] ;
      i = i + 1 ;
      count = count + 1 ;
    }
    else if(A[i] <= B[j]){
      time = time + A[i] ;
      i = i + 1 ;
      count = count + 1 ;
    }
    else{
      time = time + B[j] ;
      j = j + 1 ;
      count = count + 1 ;
    }
  }
  cout << count-1 << endl ;
}