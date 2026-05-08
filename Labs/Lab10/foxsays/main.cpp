#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<string> recording;
        string line;

        getline(cin, line);
        stringstream ss(line);
        string word;
        while (ss >> word) {
            recording.push_back(word);
        }

        unordered_set<string> known;

        while (true) {
            getline(cin, line);
            if (line == "what does the fox say?") break;

            stringstream ss2(line);
            string animal, goes, sound;
            ss2 >> animal >> goes >> sound;
            known.insert(sound);
        }

        bool first = true;
        for (string &s : recording) {
            if (!known.count(s)) {
                if (!first) cout << " ";
                cout << s;
                first = false;
            }
        }
        cout << "\n";
    }

    return 0;
}