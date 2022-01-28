// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        vector <int> ans;
        int r1 = 0, r2 = 0;
        int d = sqrt((pow(b, 2) - 4*a*c));
	cout << d << " ";
        r1 = (-b + d) / (2*a);
        r2 = (-b - d) / (2*a);
        if(r1 > r2) {
            ans.push_back(r1);
            ans.push_back(r2);
        } else {
            ans.push_back(r2);
            ans.push_back(r1);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
