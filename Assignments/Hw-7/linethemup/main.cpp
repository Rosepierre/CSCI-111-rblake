#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> names(n);
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    bool increasing = is_sorted(names.begin(), names.end());
    bool decreasing = is_sorted(names.begin(), names.end(), greater<string>());

    if (increasing) {
        cout << "INCREASING\n";
    } else if (decreasing) {
        cout << "DECREASING\n";
    } else {
        cout << "NEITHER\n";
    }

    return 0;
}