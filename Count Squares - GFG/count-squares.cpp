//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSquares(int n) {
        // code here
        double res=sqrt(n);
        //int ans=floor(res);
        if(res!=floor(res))  return ceil(res)-1;
        return res-1;
        
        // int cnt=0;
        // for(int i=1;i<sqrt(n);i++){
        //     cnt++;
        // }
        // return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}
// } Driver Code Ends