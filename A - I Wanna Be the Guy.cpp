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
    int n, x, y, e = 1;
    cin >> n >> x;
    int* a = new int[x];
    for (int i = 0; i < x; i++) {
        cin >> a[i];
    }
    cin >> y;
    int* b = new int[y];
    for (int i = 0; i < y; i++) {
        cin >> b[i];
    }
    int r = y + x;
    int* c = new int[r];
    for (int i = 0, j = 0; i < r; i++) {
        if (i < x) {
            c[i] = a[i];
        }
        else {
            c[i] = b[j];
            j++;
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            if (c[j] == e) {
                e++;
                break;
            }
        }
    }
    if (e == n + 1) {
        cout << "I become the guy."; return 0;
    }
    cout << "Oh, my keyboard!";
    return 0;
}