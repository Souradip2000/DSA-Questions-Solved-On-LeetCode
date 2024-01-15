/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        string ans1, ans2;
        if(head==nullptr || head->next==nullptr)    
            return true;
        while(head!=nullptr){
            //ans1*=10;
            ans1+=to_string(head->val);
            st.push(head->val);
            head=head->next;
        }
        while(!st.empty()){
            //ans2*=10;
            ans2+=to_string(st.top());
            st.pop();
        }
        if(ans1==ans2)  return true;
        return false;
        
    }
};