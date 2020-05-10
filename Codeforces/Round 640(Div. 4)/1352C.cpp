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
     
    int cnt(int x, int y) {
        return (x - x / y);
    }
     
    signed main() {
        int t = 1;
        cin >> t;
        while(t--) {
            int n, k;
            cin >> n >> k;
            int low = 1, high = n * k, ans = high;
            while(low <= high) {
                int mid = low + (high - low) / 2;
                if(cnt(mid, n) >= k) {
                    ans = mid;
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
            cout << ans << endl;
        }
    }
