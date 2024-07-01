/*
      yildiz
*/
#include <string>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        swap(v[0], v[1]);
        swap(v[n - 1], v[0]);

        if (v[0] == v[1])
            cout << "NO\n";
        else {
            cout << "YES\n";
            for (int i = 0; i < n; i++) {
                cout << v[i] << " ";
            }
            cout << "\n";
        }

    }