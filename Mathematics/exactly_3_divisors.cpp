#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isPrime(int N) {
            for(int i = 2; i <= sqrt(N); i++) {
                if(N % i == 0) return false;
            }
            return true;
        }

        int exactly3Divisors(int N) {
            if(N <= 1) return 0;
            int count = 0;
            for(int i = 2; i <= sqrt(N); i++) {
                if(isPrime(i)) {
                    count++;
                }
            }
            return count;
        }
};


int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        Solution obj;
        cout << obj.exactly3Divisors(N) << endl;
    }
    return 0;
}
