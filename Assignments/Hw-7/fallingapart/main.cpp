#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    long long alice = 0, bob = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            alice += a[i];  
        } else {
            bob += a[i];
        }
    }

    cout << alice << " " << bob << "\n";

    return 0;
}