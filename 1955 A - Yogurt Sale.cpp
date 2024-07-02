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
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (2 * a <= b)
            cout << n * a << "\n";
        else
        {
            if (n & 1)
                cout << n / 2 * b + a << "\n";
            else
                cout << n / 2 * b << "\n";
        }
    }
    return 0;
}