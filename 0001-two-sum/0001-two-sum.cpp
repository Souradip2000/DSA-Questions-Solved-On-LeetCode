class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int diff=-nums[i]+target;
            if(m.find(diff)==m.end()){
                pair<int,int> p = {nums[i], i};
                m.insert(p);
                continue;
            }
            auto it=m.find(diff);
            ans.push_back(i);
            ans.push_back(it->second);
            break;
        }
        return ans;
    }
};