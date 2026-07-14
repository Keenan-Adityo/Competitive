class Solution {
public:
    string addBinary(string a, string b) {
        int aidx = a.length() - 1;
        int bidx = b.length() - 1;
        string ans = "";
        bool keep = 0;
        while(aidx >= 0 && bidx >= 0) {
            if(a[aidx] == '1' && b[bidx] == '1') {
                ans.insert(ans.begin(), keep ? '1' : '0');
                keep = 1;
            } else if(a[aidx] == '1' || b[bidx] == '1') {
                ans.insert(ans.begin(), keep ? '0' : '1');
            } else {
                ans.insert(ans.begin(), keep ? '1' : '0');
                keep = 0;
            }
            aidx--; bidx--;
        }
        while(aidx >= 0) {
            if(keep && a[aidx] == '1') {
                ans.insert(ans.begin(), '0');
            } else if(keep){
                ans.insert(ans.begin(), '1');
                keep = 0;
            } else {
                ans.insert(ans.begin(), a[aidx]);
            }
            aidx--;
        }
        while(bidx >= 0) {
            if(keep && b[bidx] == '1') {
                ans.insert(ans.begin(), '0');
            } else if(keep){
                ans.insert(ans.begin(), '1');
                keep = 0;
            } else {
                ans.insert(ans.begin(), b[bidx]);
            }
            bidx--;
        }
        if(keep) ans.insert(ans.begin(), '1');
        return ans;
    }
};