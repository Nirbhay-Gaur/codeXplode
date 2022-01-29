#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    long long additionUnderModulo(long long a, long long b) {
        long long M = 1000000007;
        return ((a%M)+(b%M))%M;
    }
};

int main() {
    int T;
    cin >> T;
    while(T--) {
        long long a;
        long long b;
        cin >> a;
        cin >> b;
        Solution obj;
        cout << obj.additionUnderModulo(a, b) << endl;
    }
    return 0;
}
