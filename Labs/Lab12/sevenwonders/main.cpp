#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int t = 0, c = 0, g = 0;

    for (char ch : s) {
        if (ch == 'T') t++;
        else if (ch == 'C') c++;
        else if (ch == 'G') g++;
    }

    int sets = min({t, c, g});

    int result = t * t + c * c + g * g + 7 * sets;

    cout << result << "\n";

    return 0;
}