#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

// Fungsi untuk cek apakah kata adalah palindrom
bool isPalindrome(const string &str) {
    int i = 0, j = str.size() - 1;
    while (i < j) {
        if (str[i] != str[j]) return false;
        i++;
        j--;
    }
    return true;
}

// Fungsi untuk cek apakah kata bisa dibentuk dari huruf-huruf string sumber
bool canBeFormed(const string &source, const string &word) {
    unordered_map<char, int> freq;
    for (char c : source) freq[c]++;
    for (char c : word) {
        if (--freq[c] < 0) return false;
    }
    return true;
}

int main() {
    string source = "indonesianationalcontest";
    vector<string> candidates = {"i", "incni", "stats", "nnn", "ala", "odo", "t", "eoe"};

    cout << "Palindrom yang bisa dibentuk dari huruf \"" << source << "\":" << endl;

    for (auto &word : candidates) {
        if (isPalindrome(word) && canBeFormed(source, word)) {
            cout << word << endl;
        }
    }

    return 0;
}
