class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> ans;
        //if(mountain[0]>mountain[1]) ans.push_back(mountain[0]);
        int n=mountain.size();
        //if(mountain[n-1]>mountain[n-2]) ans.push_back(mountain[n-1]);
        for(int i=1;i<n-1;i++){
            if(mountain[i]>mountain[i-1] && mountain[i]>mountain[i+1])  
                ans.push_back(i);
        }
        return ans;
    }
};