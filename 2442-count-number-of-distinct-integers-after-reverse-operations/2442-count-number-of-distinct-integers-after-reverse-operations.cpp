class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        // reverse each int and add to end
        vector<int> final(nums);
        for(int i: nums){
            string temp = to_string(i);
            reverse(temp.begin(), temp.end());
            final.push_back(stoi(temp));
        }
        sort(final.begin(), final.end());
        auto it=unique(final.begin(), final.end());
        final.erase(it, final.end());
        return final.size();
        // // add all elements to a set
        // set<int> st;
        // for(int i: final){
        //     st.insert(i);
        // }
        // // return the size of the set
        // return st.size();
    }
};