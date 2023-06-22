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
    ListNode* oddEvenList(ListNode* head) {
        ListNode*eve= new ListNode(0);
        ListNode*odd= new ListNode(0);
        ListNode*evehead=eve;
        ListNode*oddhead=odd;
        int pos=1;
        while(head)
        {
            if((pos)%2==1)
            {
                oddhead->next=head;
                oddhead=oddhead->next;
            
            }
            else
            {
                evehead->next=head;
                evehead=evehead->next;
            }
            pos++;
            head=head->next;
        }
        oddhead->next=eve->next;
        evehead->next=NULL;
        return odd->next;

        
        
    }
};