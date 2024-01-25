//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    int i=0;
	    int j=s.length()-1;
	    
	    int flag=0;
	    while(i<j){
	        if(s[i]!=s[j]){
	            flag=1;
	            break;
	        }else{
	            i++;
	            j--;
	        }
	    }
	    
	    if(flag) return 0;
	    return 1;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends