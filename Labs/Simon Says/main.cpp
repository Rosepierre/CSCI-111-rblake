/* Simon says kattis problem by Roger Blake */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;
    cin.ignore();  

    string sent;
    for (int i = 0; i < num; i++) {
        getline(cin, sent);
        string simon = "Simon says ";
        if (sent.substr(0, simon.length()) == simon) {
            cout << sent.substr(simon.length()) << endl;
        }
    }
    return 0;
}