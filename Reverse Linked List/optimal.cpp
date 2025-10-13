class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* nextnode = NULL;
        ListNode* prevnode = NULL;
        while (head) {
            nextnode = head->next;
            head->next = prevnode;
            prevnode = head;
            head = nextnode;
        }
        return prevnode;
    }
};