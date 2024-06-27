
/* 
      yildiz
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;
int main() {
    int n = 0;
    cin >> n;

    int temp = sqrt(1 + 8 * n);
    if (temp * temp == 1 + 8 * n) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}