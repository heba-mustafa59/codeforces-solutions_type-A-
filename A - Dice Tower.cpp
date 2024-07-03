/*
      yildiz
*/
#include <string>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;

    bool heba = true;
    while (n--) {
        int a, b;
        cin >> a >> b;

        if (7 - a == x || 7 - b == x || a == x || b == x) {
            heba= false;
        }
    }

    if (heba) cout << "YES" << "\n";
    else cout << "NO" << "\n";

    return 0;
}