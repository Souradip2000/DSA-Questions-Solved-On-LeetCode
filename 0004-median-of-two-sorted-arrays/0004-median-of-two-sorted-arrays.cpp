class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        
        int i=0, j=0;
        vector<int> temp;
        
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                temp.push_back(nums1[i]);
                i++;
            }else{
                temp.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            temp.push_back(nums1[i++]);
        }
        while(j<m){
            temp.push_back(nums2[j++]);
        }
        
        if((n+m)%2!=0) return temp[(n+m)/2];
        double ans = temp[(n+m)/2] + temp[(n+m)/2-1];
        //cout<<"Ans: "<<ans;
        return ans/2;
    }
};