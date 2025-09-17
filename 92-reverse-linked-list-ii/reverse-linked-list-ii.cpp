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

    ListNode* reverseBetween(ListNode* head, int left1, int right1) {
        if (!head || left1 == right1) return head;

        ListNode* left = nullptr;
        ListNode* right = nullptr;
        ListNode* last = nullptr;
        ListNode* leftprev = nullptr;
        ListNode* temp = head;
        ListNode* prev = nullptr;
        int i = 1;

        while (temp != nullptr) {
            if (i == left1) {
                left = temp;
                leftprev = prev;
            }

            if (i == right1) {
                right = temp;
                last = temp->next;
                break;
            }

            prev = temp;
            temp = temp->next;
            i++;
        }

        right->next = nullptr;

        ListNode* left2 = rev(left);

        if (leftprev != nullptr) {
            leftprev->next = left2;
        } else {
            head = left2;
        }

        ListNode* curr = left2;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = last;

        return head;
    }
};
