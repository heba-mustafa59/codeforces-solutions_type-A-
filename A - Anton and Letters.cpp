/*
      yildiz
*/
#include <iostream>
#include <string>
#include<iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int c = 0;
    string s;
    getline(cin, s);
    int n = s.length();
    for (int i = 1; i < n - 1; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            if (s[j] == s[i]) {
                s[i] = ' ';
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] >= 97 && s[i] <= 122) {
            c++;
        }
    }
    cout << c;
    return 0;
}