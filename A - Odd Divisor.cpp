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

    while(t--) {
        long long n;
        cin >> n;

        long long f = n & (n - 1);
        if (f == 0) {
            cout << "NO" << "\n";
        }
        else {
            cout << "YES" << "\n";
        }
    }

    return 0;
}