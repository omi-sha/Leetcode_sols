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
    int length(ListNode* head){
        int count=0;
        while(head){
            count++;
            head= head->next;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
    
        int size = length(head);
        int count = 0;
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nxt = NULL;
        while(count < k && curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
            count++;
        }
        size -= k;

        if(nxt && size >= k){
            head->next = reverseKGroup(nxt , k);
        }
        else head->next = nxt;
        return prev;
    }
};