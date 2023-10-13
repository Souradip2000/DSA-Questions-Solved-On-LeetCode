class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> st;
        int moves=0;
        for(int i=nums.size()-1; i>=0; --i){
            moves++;
            if(nums[i]<=k)  st.insert(nums[i]);
            if(st.size()==k)    break;
        }
        return moves;
    }
};