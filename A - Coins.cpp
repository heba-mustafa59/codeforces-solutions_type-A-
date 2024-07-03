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
 
        long long a, b;
        cin >> a >> b;

        if (b % 2 == 0 && a % 2 != 0) {
            cout << "NO" << "\n";
        }
        else {
            cout << "YES" << "\n";
        }
    }
    return 0;
}