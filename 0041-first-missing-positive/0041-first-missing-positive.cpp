class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> m;
        int maxEle = INT_MIN;
        for(int i: nums){
            m[i]++;
            if(i>maxEle) maxEle=i;
        }
        int ans=1;
        int flag=0;
        for(int i=1;i<=maxEle;i++){
            if(m.find(i)==m.end()){
                ans= i;
                flag=1;
                break;
            }
        }
       if(flag==0){
           if(maxEle+1>0) return maxEle+1;
           else return 1;
       }
        return ans;
    }
};