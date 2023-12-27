class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt1=0, cnt2=0;
        int end=s.length();
        while(s[end-1]==' '){
            end--;
        }
        for(int i=0;i<end;i++){
            if(s[i]==' '){
                cnt1=cnt2;
                cnt2=0;
            }else{
                cnt2++;
            }
        }
        if(cnt2!=0) cnt1=cnt2;
        return cnt1;
    }
};