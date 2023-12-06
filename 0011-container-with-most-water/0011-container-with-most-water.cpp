class Solution {
public:
    int maxArea(vector<int>& height) {
       int i=0, j=height.size()-1;
        int maxWater=0;
        while(i<j){
            int length=j-i;
            int breadth=(height[i]<height[j])?(height[i]):(height[j]);
            int water=length*breadth;
            (maxWater<water)?maxWater=water:maxWater*1;
            if(height[i]<height[j]) i++;
            else j--;
        }
        return maxWater;
    }
};