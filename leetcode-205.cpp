class Solution {
public:
    bool isIsomorphic(string s, string t) {
        ios::sync_with_stdio(0); cin.tie(0);
        unordered_map<char,char> flag;
        unordered_map<char,bool> check;
        bool ans = 1;
        for(int i = 0; i < s.length(); i++) {
            if(!flag[s[i]] && !check[t[i]]) {
                flag[s[i]] = t[i];
                check[t[i]] = true;
            } else {
                if(flag[s[i]] != t[i]) {
                    ans = 0;
                    break;
                }

            }
        }
        return ans;
    }
};
