class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;
       sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            int j=i+1, k=nums.size()-1;
            vector<int> ele;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    ele.push_back(nums[i]);
                    ele.push_back(nums[j++]);
                    ele.push_back(nums[k--]);
                    //ans.push_back(ele);
                    st.insert(ele);
                    ele.clear();
                    //break;
                }else if(sum<0){
                    j++;
                }else{
                    k--;
                }
            }
        }
        for(auto i: st){
            ans.push_back(i);
        }
        return ans;
    }
};