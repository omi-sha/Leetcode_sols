class Solution {
public:
    bool isPalindrome(ListNode* head) {
        //  if(head == NULL || head->next == NULL){
        //     return (head);
        // }
        // ListNode *r_head = NULL;
        // ListNode *ptr = head;
        // while(ptr!=NULL){
        //     ListNode *temp = new ListNode(ptr->val);
        //     temp ->next = r_head;
        //     r_head = temp;
        //     ptr = ptr->next;
        // }
        // while(head && r_head){
        //     if(head->val != r_head->val){
        //         return false;
        //     }
        //     head = head->next;
        //     r_head = r_head->next;
        // }
        // return true;

        // finding the middle element
        ListNode* slow =head, *fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast != NULL && fast->next == NULL){
            slow = slow->next;
        }
        ListNode *prev = NULL;
        ListNode *temp = NULL;
        while(slow != NULL && slow->next != NULL){
            temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
                if(slow != NULL){
            slow->next = prev;
        }
                fast = head;
        while(slow && fast){
            if(slow->val != fast->val){
                return false;
            }
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
};