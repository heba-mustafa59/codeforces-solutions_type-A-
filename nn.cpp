/* yildiz
*/
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;

    size_t n = str.find('.');
    str[n - 1] == '9' ? cout << "GOTO Vasilisa." << "\n" :
        (str[n + 1] >= '5' ? str[n - 1] += 1 : 0,
            str.erase(str.begin() + n, str.end()), cout << str << "\n");

    return 0;
}



