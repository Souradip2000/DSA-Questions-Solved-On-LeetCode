class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st1;
       for(char ch: s){
           if(!st1.empty() && st1.top()==ch){
               st1.pop();
           }else{
               st1.push(ch);
           }
       } 
        stack<char> st2;
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        string ans;
        while(!st2.empty()){
            ans+=st2.top();
            st2.pop();
        }
        return ans;
    }
};