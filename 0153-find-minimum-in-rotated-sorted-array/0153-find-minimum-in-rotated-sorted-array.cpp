class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=nums[0];
        for(int i: nums){
            if(i<min)   min=i;
        }
        return min;
    }
};