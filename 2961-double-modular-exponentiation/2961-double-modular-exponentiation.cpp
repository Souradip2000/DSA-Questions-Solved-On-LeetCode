class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& arr, int target) {
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            int a=arr[i][0], b=arr[i][1], c=arr[i][2], m=arr[i][3];
            int p1=1;
            for(int j=0;j<b;j++){
                p1*=a;
                p1%=10;
            }
            int p2=1;
            for(int j=0;j<c;j++){
                p2*=p1;
                p2%=m;
            }
            if(p2==target)      ans.push_back(i);
        }
        return ans;
        
        
        
        
        
        
        
        /*
       vector<int> ans;
        for(int i=0;i<arr.size();i++){
            int calc1= pow(arr[i][0], arr[i][1]);
            int calc2=calc1%10;
            int var=arr[i][2];
            long long calc3= pow(calc2, var);
            long long calc=calc3 % arr[i][3];
            if(calc==target)    ans.push_back(i);
        }
        return ans;
        */
    }
};