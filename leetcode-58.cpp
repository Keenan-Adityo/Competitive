class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool start = 0;
        for(int i = s.length() - 1; i >= 0; i--) {
            if(s[i] == ' ') {
                if(start) break;
            } else {
                if(!start) start = 1;
                count++;
            }
        }
        return count;
    }
};
