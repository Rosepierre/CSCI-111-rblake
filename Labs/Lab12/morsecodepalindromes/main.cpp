#include <bits/stdc++.h>
using namespace std;

unordered_map<char, string> mp = {
    {'A', ".-"},   {'B', "-..."}, {'C', "-.-."},
    {'D', "-.."},  {'E', "."},    {'F', "..-."},
    {'G', "--."},  {'H', "...."}, {'I', ".."},
    {'J', ".---"}, {'K', "-.-"},  {'L', ".-.."},
    {'M', "--"},   {'N', "-."},   {'O', "---"},
    {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."},
    {'S', "..."},  {'T', "-"},    {'U', "..-"},
    {'V', "...-"}, {'W', ".--"},  {'X', "-..-"},
    {'Y', "-.--"}, {'Z', "--.."},
    {'0', "-----"},{'1', ".----"},{'2', "..---"},
    {'3', "...--"},{'4', "....-"},{'5', "....."},
    {'6', "-...."},{'7', "--..."},{'8', "---.."},
    {'9', "----."}
};

vector<string> morse;

bool isAlnum(char c) {
    return isalnum(c);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    for (char &ch : s) {
        ch = toupper(ch);
        if (mp.count(ch)) {
            morse.push_back(mp[ch]);
        }
    }
    if (morse.empty()) {
        cout << 0 << "\n";
        return 0;
    }

    int i = 0, j = (int)morse.size() - 1;

    int iPos = 0, jPos = (int)morse[j].size() - 1;

    while (i <= j) {
        if (morse[i][iPos] != morse[j][jPos]) {
            cout << 0 << "\n";
            return 0;
        }

        iPos++;
        jPos--;

        if (iPos == morse[i].size()) {
            i++;
            iPos = 0;
        }
        if (jPos < 0) {
            j--;
            if (j >= 0) jPos = morse[j].size() - 1;
        }
    }

    cout << 1 << "\n";
    return 0;
}