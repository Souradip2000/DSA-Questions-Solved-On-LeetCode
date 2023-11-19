class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {

        int i=s1.size(), j=s2.size(), k=s3.size(); 

        int min=INT_MAX;
        if(i>j) min=j; else min=i;
        if(min>k) min=k;
        //cout<<"Min is: "<<min<<endl;

        int idx=0, flag=0, ans=0;
        // cout<<"Ans declaration: "<<ans<<endl;
        // cout<<"Idx: "<<idx<<endl;

        while(idx<min){
            if((s1[idx]!=s2[idx]) || (s2[idx]!=s3[idx])){ 
                flag=1; 
                break;
            }
            idx++;
        }
        // cout<<"Idx final: "<<idx<<endl;
        // cout<<"Flag: "<<flag<<endl;

        if(idx==0)  return -1;
        else{
            ans=i-idx;
            //cout<<ans<<endl;
            ans=ans+(j-idx);
            //cout<<ans<<endl;
            ans=ans+(k-idx);
            //cout<<ans<<endl;
        }

        return ans;
    }
};