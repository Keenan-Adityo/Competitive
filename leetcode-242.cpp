class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, int> flag;
        for(int i = 0; i < s.length(); i++) {
            flag[s[i]]++;
        }
        for(int i = 0; i < t.length(); i++) {
            if(flag[t[i]] > 0) {
                flag[t[i]]--;
            } else {
                return false;
            }
        }
        return true;
    }
};
