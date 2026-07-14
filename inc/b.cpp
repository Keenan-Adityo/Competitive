#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, m;
    cin >> n >> m;
    int max = (n * (n - 1)) / 2;

    vector<int> u;
    unordered_map<int, bool> flag; 
    flag[0] = 1;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        u.push_back(temp);
    }
    int last = 0;
    int smallest = 0;
    for(auto i : u) {
        if(last != 0) {
            while(flag[smallest + 1] == 1) {
            smallest++;
        }
        
        max -= abs(i - smallest - 1);
    
        flag[i] = 1;
        last++;
        } 
    }

    if(m < n - 1 || m > max) {
        cout << "-1 -1\n";
        return 0;
    } else {
        int count = 0;
        for(int i = 1; i < n; i++) {
            cout << u[i - 1] << " " << u[i] << "\n";
            count++;
            if(count == m) break;
        }
        for(int i = 0; i < n; i++) {
            if(count == m) break;
            last = 0;
            bool breaker = 1;
            for(int j = i + 1; j < n;j++) {
                if(count == m) break;
                if(last < u[j]) {
                    if(!breaker) {
                        cout << u[i] << " " << u[j] << "\n";
                        count++;
                    } 
                    last = u[j];
                } else {
                    break;
                }
                breaker = 0;
            }
        }
    }
    // cout << " " <<max;
    return 0;
}

