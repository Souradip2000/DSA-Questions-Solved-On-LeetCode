class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string word="";
        int n=s.length();
        int i=n-1;
        while(i>=0){
            if(s[i]==' '){
                if(word.length()>0){
                    reverse(word.begin(), word.end());
                    ans+=word+' ';
                    word="";
                }
            }else{
                word+=s[i];
            }
            i--;
        }
        if(word.length()>0){
            reverse(word.begin(), word.end());
            ans+=word;
        }else{
            ans.pop_back();
        }
        return ans;
    }
};