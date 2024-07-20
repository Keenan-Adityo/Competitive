#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ans = 0;
        // input
        string enemy, ally;
        cin >> enemy >> ally;

        // proccess
        for(int i = 0; i < n; i++) {
            bool dealt = 0;
            if(enemy[i] == '1') {
                if(i - 1 >= 0) {
                    if(ally[i - 1] == '1') {
                        ans++;
                        dealt = 1;
                        ally[i - 1] = '0';
                    }
                }
                if(i + 1 < n && !dealt) {
                    if(ally[i + 1] == '1') {
                        ans++;
                        ally[i + 1] = '0';
                    }
                }
            }
            else if(ally[i] == '1') {
                ans++;
                ally[i] = '0';
            }
        }

        cout << ans << "\n";
    }
    return 0;
}