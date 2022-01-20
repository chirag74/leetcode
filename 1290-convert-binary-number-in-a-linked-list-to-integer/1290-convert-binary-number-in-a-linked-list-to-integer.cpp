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
    int getDecimalValue(ListNode* head) {
        vector<int> st;
        ListNode*temp=head;
        while(temp!=NULL){
            st.push_back(temp->val);
            temp=temp->next;
        }
        int n=0;
        int ans=0;
        for(int i=st.size()-1;i>=0;i--){
             ans+=st[i]*pow(2,n);
            n++;
            
        }
        return ans;
    }
};