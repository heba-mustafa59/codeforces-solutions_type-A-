/*
      yildiz
*/
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
    int n;
    cin >> n;  

    for (int i = 0; i < n; ++i) {
        int x, y, a, b;
        cin >> x >> y >> a >> b;  

        int d = y - x;
        int sum = a + b;

        if (d % sum == 0) {   
            cout << d / sum << "\n";
        }
        else {
            cout << -1 << "\n";
        }
    }

    return 0;
}