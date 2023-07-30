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
    ListNode* reverseList(ListNode* head) {
            ListNode* prev = NULL; // Initialize previous as NULL
            ListNode* curr = head; // Initialize current as head
            ListNode* next;

            while (curr != NULL) {
                next = curr->next;  // Store next
                curr->next = prev;  // Reverse current node's pointer
                prev = curr;        // Move pointers one position ahead.
                curr = next;
            }
            return prev;

    }
};