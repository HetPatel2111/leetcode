/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return nullptr;

        ListNode* a = headA;
        ListNode* b = headB;

        while (a != b) {
            if (a == nullptr && b == nullptr) {
                // Both are null => no intersection
                return nullptr;
            }

            // Move pointer a
            if (a == nullptr) {
                a = headB;
            } else {
                a = a->next;
            }

            // Move pointer b
            if (b == nullptr) {
                b = headA;
            } else {
                b = b->next;
            }
        }

        return a;  // Intersection node or nullptr
    }
};
