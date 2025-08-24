class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* even1 = even; // store even head

        while (even != nullptr && even->next != nullptr) {
            odd->next = even->next;
            odd = odd->next;              // move odd one step

            even->next = odd->next;
            even = even->next;            // move even one step
        }

        odd->next = even1; // connect odd list with even list

        return head;
    }
};
