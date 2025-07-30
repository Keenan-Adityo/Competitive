#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    int num[n];
    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    int first = -1, last = -1;
    bool flag = true;
    for(int i = 1; i < n; i++) {
        if(num[i] - num[i - 1] > 1) {
            if(!flag) {
                cout << ",";
            }
            if(last == -1) {
                cout << first;
            } else {
                cout << first << "-" << last;
            }
            
            flag = 0;
        } else {

        }
    }
    return 0;
}