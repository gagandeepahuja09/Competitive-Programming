#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 1; i <= n; i *= 2) {
            v.push_back(i);
            n -= i;
        }
        if(n > 0)
            v.push_back(n);
        sort(v.begin(), v.end());
        cout << v.size() - 1 << endl;
        for(int i = 1; i < v.size(); i++)
            cout << v[i] - v[i - 1] << " ";
        cout << endl;
    }
	return 0;
}
