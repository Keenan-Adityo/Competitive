#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve() {
    deque<int> dq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dq.pb(x);
    }
    int cur = 0;
    bool up = 0;
    string ans = "";
    while(!dq.empty()) {
        int first = dq.front();
        int last = dq.back();
        if (up) {
            if(first < last) {
                if(cur < first) {
                    cur = last;
                    ans+= "R";
                    dq.pop_back();
                } else {
                    cur = first;
                    ans += "L";
                    dq.pop_front();
                }
            } else {
                if(last < cur) {
                    cur = last;
                    ans+= "R";
                    dq.pop_back();
                } else {
                    cur = first;
                    ans += "L";
                    dq.pop_front();
                }
            }
            up = 0;
            
        } else {
            if(first < last) {
                if(cur < last) {
                    cur = last;
                    ans+= "R";
                    dq.pop_back();
                } else {
                    cur = first;
                    ans += "L";
                    dq.pop_front();
                }
            } else {
                if(cur < first) {
                    cur = first;
                    ans+= "L";
                    dq.pop_front();
                } else {
                    cur = last;
                    ans += "R";
                    dq.pop_back();
                }
            }
            up = 1;
        }
    }
    cout << ans << "\n";
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
