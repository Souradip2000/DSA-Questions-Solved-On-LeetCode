//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> ans;
        int i=0, j=n-1, first=-1, second=-1, flag1=1, flag2=1;
        while((flag1 || flag2) && (i<n || j>=0)){
            if(flag1){
                if(arr[i]==x){
                    first=i;
                    flag1=0;
                }
            }// }else{
            //     i++;
            // }
            if(flag2){
                if(arr[j]==x){
                    second=j;
                    flag2=0;
                }
            }// }else{
            //     j--;
            // }
            i++;j--;
        }
        ans.push_back(first);
        ans.push_back(second);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends