#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    cin >> n;
    double x = ((n * log10(n / M_E)) + (log10(2 * M_PI * n) / 2.0));
    cout << floor(x)+1 << endl;
    return 0;
}
