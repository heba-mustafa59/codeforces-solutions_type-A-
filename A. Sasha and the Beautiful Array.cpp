/*
      yildiz
*/
#include <iostream>
#include <string>
#include<iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int s = 0;
        for (int i = 1; i < n; i++) {
            s += (arr[i] - arr[i - 1]);
        }
        cout << s << "\n";
    }
    return 0;
}