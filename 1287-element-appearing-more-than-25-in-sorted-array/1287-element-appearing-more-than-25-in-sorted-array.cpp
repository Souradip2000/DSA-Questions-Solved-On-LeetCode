class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int total=n/4;
        unordered_map<int, int> mpp;
        for(int i: arr)     mpp[i]++;
        for(auto it: mpp){
            if(it.second>total)    return it.first;
        }
        return 0;
    }
};