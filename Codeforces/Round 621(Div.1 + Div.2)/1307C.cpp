#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define read(a)  for(int i = 0; i < n; i++) cin >> a[i];
#define print(a)  for(int i = 0; i < n; i++) cout << a[i] << " ";
#define pb push_back
#define ins insert
#define pql priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define pqlv priority_queue<vi>
#define pqsv priority_queue<vi, vvi, greater<vi>>
#define endl '\n'
#define MOD 998244353
#define all(a)  (a.begin(), a.end())

vvi adj;

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        string s;
        cin >> s;
        vi cnt(26, 0);
        int dp[26][26];
        memset(dp, 0, sizeof dp);
        for(int i = 0; i < s.size(); i++) {
            int c = s[i] - 'a';
            for(int j = 0; j < 26; j++) {
                dp[j][c] += cnt[j];
            }
            cnt[c]++;
        }
        int ans = *max_element(cnt.begin(), cnt.end());
        for(int i = 0; i < 26; i++) {
            for(int j = 0; j < 26; j++) {
                ans = max(ans, dp[i][j]);
            }
        }
        cout << ans;
    }
}
