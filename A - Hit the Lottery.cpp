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
    long long n;
    cin >> n;
    int c = 0, m = 0, b = 0, l = 0;
    if (n >= 100) {
        c += (n / 100);
        n -= (c * 100);
    }

    if (n >= 20) {
        m += (n / 20);
        n -= (m * 20);

    }
    if (n >= 10) {
        l += (n / 10);
        n -= (l * 10);

    }
    if (n >= 5) {
        b += (n / 5);
        n -= (b * 5);
    }
    if (n >= 1)c += n;
    cout << c + b + m + l;
    return 0;
}