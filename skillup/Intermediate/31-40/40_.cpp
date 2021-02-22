#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using pii = pair<int, int>;

void chmin(ll &a, ll b) { if (a > b) a = b; }
void chmax(ll &a, ll b) { if (a < b) a = b; }

const int mod = 10000;

int dp[105][3][3];

int main() {
  int N, K;
  cin >> N >> K;
  
  vector<int> x(N, -1);
  rep(i, K) {
    int a, b;
    cin >> a >> b;
    x[a - 1] = b - 1;
  }

  dp[0][0][0] = 1;
  rep(i, N) {
    rep(j, 3) {
      rep(k, 3) {
        vector<int> v = {0, 1, 2};
        if (x[i] != -1) v = {x[i]};
        for (int l : v) {
          if (i > 1 && j == k && k == l) continue;
          dp[i + 1][k][l] += dp[i][j][k];
          dp[i + 1][k][l] %= mod;
        }
      }
    }
  }

  int ans = 0;
  rep(i, 3) rep(j, 3) {
    ans += dp[N][i][j];
    ans %= mod;
  }
  cout << ans << endl;
  return 0;
}