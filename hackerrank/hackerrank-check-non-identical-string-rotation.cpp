#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'isNonTrivialRotation' function below.
 *
 * The function is expected to return a BOOLEAN.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

bool isNonTrivialRotation(string s1, string s2) {
    string loop = s1 + s1;
    if(s1 == s2) return 0;
    return loop.find(s2) != string::npos;
}

int main()
{
    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    bool result = isNonTrivialRotation(s1, s2);

    cout << result << "\n";

    return 0;
}
