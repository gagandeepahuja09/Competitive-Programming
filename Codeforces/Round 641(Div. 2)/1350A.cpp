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
     
    signed main() {
        int t;
        cin >> t;
        while(t--) {
            int n, k;
            cin >> n >> k;
            if(n % 2) {
                int num = 2;
                for(int i = 2; i <= n; i++) {
                    if(n % i == 0) {
                        num = i;
                        break;
                    }
                }
                n += num; k--;
            }
            cout << n + (k * 2) << endl;
        }
    }
