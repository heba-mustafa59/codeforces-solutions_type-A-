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
    int t;
    cin >> t;

    while (t--) {
        ll n;
        int a, b;
        cin >> n >> a >> b;

        ll r = 0;

        if (a * 2 < b) {
            r = a * n;
        }
        else {
            r = (n / 2) * b + (n % 2) * a;
        }

        cout << r<< "\n";
    }

    return 0;
}