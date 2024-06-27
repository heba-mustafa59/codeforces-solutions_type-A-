
/* 
      yildiz
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;
int main() {

    int r = 0, g = 0, b = 0;
    cin >> r >> g >> b;

    r = (r + 1) / 2;
    g = (g + 1) / 2;
    b = (b + 1) / 2;

    int output = 0;
    if (b >= g && b >= r) {
        output = 30 + 3 * b - 1;
    }
    else if (g >= r) {
        output = 30 + 3 * g - 2;
    }
    else {
        output = 30 + 3 * r - 3;
    }

    cout << output << endl;

    return 0;
}