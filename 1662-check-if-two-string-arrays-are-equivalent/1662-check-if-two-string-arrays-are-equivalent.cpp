class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string temp1, temp2;
        for(string c: word1)    temp1+=c;
        for(string c: word2)    temp2+=c;
        // sort(temp1.begin(), temp1.end());
        // sort(temp2.begin(), temp2.end());
        if(temp1==temp2)    return true;
        return false;
    }
};