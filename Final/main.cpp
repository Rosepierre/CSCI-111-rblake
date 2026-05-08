#include <bits/stdc++.h>
using namespace std;

int isLongEnough(const string &pw) {
    return pw.size() >= 8;
}

void analyzetime(const string &pw,
                     int &lower, int &upper,
                     int &digit, int &special) {

    lower = upper = digit = special = 0;

    for (char c : pw) {
        if (c >= 'a' && c <= 'z') lower = 1;
        else if (c >= 'A' && c <= 'Z') upper = 1;
        else if (c >= '0' && c <= '9') digit = 1;
        else special = 1;
    }
}

int scoring(const string &pw,
             int lower, int upper,
             int digit, int special) {

    int score = 0;
    score += lower;
    score += upper;
    score += digit;
    score += special;
    score += (pw.size() > 10 ? 1 : 0);

    return score;
}

string howgood(int score) {
    if (score == 5) return "Excellent";
    if (score == 4) return "Strong";
    if (score == 3) return "Ok";
    return "Bad";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string password;

    getline(cin >> ws, password);

    if (!isLongEnough(password)) {
        cout << "Rejected: password must be at least 8 characters long\n";
        return 0;
    }

    int lower, upper, digit, special;
    analyzetime(password, lower, upper, digit, special);

    int score = scoring(password, lower, upper, digit, special);

    cout << "Score: " << score << " -> " << howgood(score) << "\n";

    return 0;
}