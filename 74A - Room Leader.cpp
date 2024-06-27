
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
    int n, p, m, a, b, c, d, e;
    int maxPoints(-2501);
    string h, leader;
    cin >> n;

    while (n--) {
        cin >> h >> p >> m >> a >> b >> c >> d >> e;
        int points = p * 100 - m * 50 + a + b + c + d + e;
        if (points > maxPoints) {
            leader = h;
            maxPoints = points;
        }
    }
    cout << leader;
    return 0;
}