/*
      yildiz
*/
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        if ((a + b) & 1)
            cout << "Alice" << "\n";
        else
            cout << "Bob" << "\n";
    }

return 0;
}