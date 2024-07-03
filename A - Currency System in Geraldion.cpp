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
    int n;
    cin >> n;
    vector <int>v(n);
    for (int i=0;i<n;i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    if (v[0] == 1) cout << -1 << endl;
    else cout << 1 << endl;

    return 0;
}