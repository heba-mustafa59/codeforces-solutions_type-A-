/*
      yildiz
*/
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int c = s[0] - '0';
        char ch = s[1];
        int y = s[2] - '0';

        switch (ch) {
        case '+':
            cout << (y + c) << "\n";
            break;
        case '-':
            cout << (y - c) << "\n";
            break;
        case '*':
            cout << (y * c) << "\n";
            break;
        case '/':
            cout << (y / c) << "\n";
            break;
        }
    }

    return 0;
}