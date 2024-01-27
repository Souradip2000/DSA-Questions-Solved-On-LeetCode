//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
  public:
    long long int equalPairs (string s)
    {
    	//code here.
    	long long int ans=0;
    	unordered_map<char, long long int> m;
    	for(char c: s){
    	    m[c]++;
    	}
    	for(auto i: m){
    	    //if(i.second>=2) 
    	    ans+=i.second*i.second;
    	}
    	return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout <<ob.equalPairs (s) << endl;
	}
}
// } Driver Code Ends