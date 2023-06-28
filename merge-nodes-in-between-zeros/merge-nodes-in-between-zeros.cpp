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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*curr=head;
        ListNode*list1=new ListNode();
        ListNode*h1=list1;
        int sum=0;
        while(curr!=NULL)
        {
            if(curr->val==0)
            {
                h1->next=new ListNode(sum);
                h1=h1->next;
                sum=0;
            }
            sum=sum+(curr->val);
            curr=curr->next;
        }
        return list1->next->next;
    }
};