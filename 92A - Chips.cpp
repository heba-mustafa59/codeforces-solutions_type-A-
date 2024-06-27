
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
    int x, y;
    cin >> x >> y;
    y %= (x * (x + 1) / 2); 

    for (int i = 1; i <= x; ++i) {
        if (y < i) {
            break;
        }
        y -= i;
    }
    cout << y << endl;
    return 0;
}