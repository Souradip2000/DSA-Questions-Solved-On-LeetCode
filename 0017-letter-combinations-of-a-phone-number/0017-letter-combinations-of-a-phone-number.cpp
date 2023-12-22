class Solution {
private:
    void solve(string digits, int index, string output, vector<string>& ans, string mapping[]){
        // base case
        if(index>=digits.length()){
            if(output.length()>0)
                ans.push_back(output);
            return;
        }
        
        // extracting the digit
        int value= digits[index]-'0';
        string temp=mapping[value];
        
        for(int i=0;i<temp.length();i++){
            output.push_back(temp[i]);
            solve(digits, index+1, output, ans, mapping);
            output.pop_back();
        }
        
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        int index=0;
        string output;
        string mapping[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits, index, output, ans, mapping);
        return ans;
    }
};