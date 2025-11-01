class Solution {
public:
    ListNode* rev(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while (curr != nullptr) {
            ListNode* ahed = curr->next;
            curr->next = prev;
            prev = curr;
            curr = ahed;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        ListNode* head1 = rev(head);
        int maxVal = head1->val;
        ListNode* dummy = new ListNode(0);
        dummy->next = head1;
        ListNode* temp = dummy;

        while (temp->next != nullptr) {
            if (temp->next->val < maxVal) {
                temp->next = temp->next->next;
            } else {
                maxVal = temp->next->val;
                temp = temp->next;
            }
        }

        return rev(dummy->next);
    }
};
