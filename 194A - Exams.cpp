
/* 
      yildiz
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    cout << (k <= n * 3 ? n * 3 - k : 0) << endl;
    return 0;
}