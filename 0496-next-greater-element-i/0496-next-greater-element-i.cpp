class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i: nums1){
            int flag=0;
            int flag2=0;
            int cnt=0;
            for(int j=0;j<nums2.size();j++){
                cnt++;
                if(nums2[j]==i)     flag=1;
                if(flag==1){
                    if(nums2[j]>i){
                        ans.push_back(nums2[j]);
                        flag2=1;
                        break;
                    }
                }
                if(cnt==nums2.size()) ans.push_back(-1);
            }
        }
        return ans;
    }
};