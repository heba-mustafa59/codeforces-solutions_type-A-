/*
      yildiz
*/
#define ll  long long 
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <queue>
#include <map>
using namespace std;


int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n; 
        int x = 4 * n;
        for (int i = 0; i < n; i++) {
            cout << x << " ";
            x -= 2;
        }
         cout << "\n";
    }

    return 0;
}