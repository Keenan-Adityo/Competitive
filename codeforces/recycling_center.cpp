#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve() {
    int n, c;
    cin >> n >> c;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;
    int power = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i] > c) {
            ans++;
        } else {
            ll temp;
            if(power > 0) {
                temp = a[i] * pow(2, power);
            } else {
                temp = a[i];
            }
            
            if (temp > c) {
                ans++;
            } else {
                power++;
            }
            
        }
    }
    cout << ans << '\n';
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
