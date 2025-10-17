class Solution {
public:
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode*> found;
        while (head) {
            if (found.count(head)) return true;
            found.insert(head);
            head = head->next;
        }
        return false;
    }
};