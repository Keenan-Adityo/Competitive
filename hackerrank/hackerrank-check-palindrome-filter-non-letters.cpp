#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'isAlphabeticPalindrome' function below.
 *
 * The function is expected to return a BOOLEAN.
 * The function accepts STRING code as parameter.
 */

bool isAlphabeticPalindrome(string code) {
    string decoded = "";
    for(int i = 0; i < code.length(); i++) {
        if(code[i] >= 'a' && code[i] <= 'z') {
            decoded += code[i];
        }
        if(code[i] >= 'A' && code[i] <= 'Z') {
            decoded += (code[i] + 'a' - 'A');
        }
    }
    int l = 0, r = decoded.length() - 1; 
    
    while(l < r) {
        if(decoded[l] != decoded[r]) {
            return 0;
        }
        l++;
        r--;
    }
    
    return 1;
}

int main()
{
    string code;
    getline(cin, code);

    bool result = isAlphabeticPalindrome(code);

    cout << result << "\n";

    return 0;
}
