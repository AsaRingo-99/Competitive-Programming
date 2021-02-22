#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005

int W , H ;
int x , y ;
ll squ ;

int main(){
  cin >> W >> H >> x >> y ;
  squ = W / 2 * H ;
  if(2 * x == W && 2 * y == H) cout << setprecision(15) << (double)squ << " " << 1 << endl ;
  else if(y == 0 || x == 0 || y == H || x == W || H * x == y * W || W == 2 * x || H == 2 * y || H * W - H * x == y * W) cout << setprecision(15) << (double)squ << " " << 0 << endl ;
  else cout << setprecision(15) << (double)squ << " " << 1 << endl ;
}