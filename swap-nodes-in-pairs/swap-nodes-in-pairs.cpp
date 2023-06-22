class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = nextNode->next;
            nextNode->next = curr;
            prev->next = nextNode;

            prev = curr;
            curr = curr->next;
        }

        return dummy->next;
    }
};
