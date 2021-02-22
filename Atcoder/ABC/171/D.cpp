#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;


int main()
{
    int b,c,n,m ;
    int sum = 0 ;
    cin >> m ;
    int A[m] ;
    for(int i = 0 ; i < m ; i++){
        cin >> A[i] ;
    }
    cin >> n ;
    for(int i = 0 ; i < n ; i++){
        sum = 0 ;
        cin >> b ;
        cin >> c ;
        for(int j = 0 ; j < m ; j ++){
            if(A[j] == b) A[j] = c ;
            sum = sum + A[j] ;
        }
        cout << sum << endl ;
    } 
}