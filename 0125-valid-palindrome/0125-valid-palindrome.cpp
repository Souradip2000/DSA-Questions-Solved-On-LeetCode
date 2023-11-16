class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), :: tolower);
        int i=0, j=s.length()-1;
        while(i<j){
            if(!iswalnum(s[i]))    i++;
            else if(!iswalnum(s[j]))    j--;
            else if(s[i++]==s[j--])  continue;
            else return false;
        }
        return true;
    }
};