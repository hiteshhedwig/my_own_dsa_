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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next)
        return head;

        ListNode* oddHead = head;
        ListNode* evenHead = head->next;
        ListNode* oddCurrent = oddHead;
        ListNode* evenCurrent = evenHead;

        while (evenCurrent && evenCurrent->next) {
            oddCurrent->next = evenCurrent->next;
            oddCurrent = oddCurrent->next;
            evenCurrent->next = oddCurrent->next;
            evenCurrent = evenCurrent->next;
        }

        oddCurrent->next = evenHead;
        return oddHead;
    }
};