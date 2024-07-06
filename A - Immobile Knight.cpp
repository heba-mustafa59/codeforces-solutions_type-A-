/*
      yildiz
*/
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t,a,b;
    cin >> t;
    while (t--) {
        cin >> a>> b;

        cout << (int)ceil(a/ 2.0) << " " << (int)ceil(b/ 2.0) << "\n";
    }
  
}