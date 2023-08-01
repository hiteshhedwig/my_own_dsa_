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
    int length(ListNode *head)
    {
        //Write your code here
        auto curr_node = head;
        // auto next_node = head->next;
        int count = 0;
        while(curr_node!=nullptr) {
            curr_node = curr_node->next;
            count+=1;
        }
        return count;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
if (!head || n <= 0)
        return head;

    // Create a dummy node to handle the case where the head needs to be removed.
    ListNode* dummy = new ListNode(0);
    dummy->next = head;

    ListNode* fast = dummy;
    ListNode* slow = dummy;

    // Move the fast pointer n steps forward.
    for (int i = 0; i <= n; ++i) {
        if (!fast) {
            // n is larger than the length of the linked list.
            delete dummy;
            return head;
        }
        fast = fast->next;
    }

    // Move both fast and slow pointers simultaneously.
    // so by the time fast pointer reaches the end, slow will be on the node that needs to be removeda
    while (fast) {
        fast = fast->next;
        slow = slow->next;
    }

    // Remove the nth node from the end.
    ListNode* toRemove = slow->next;
    slow->next = slow->next->next;
    delete toRemove;

    // Update the head if the original head is removed.
    ListNode* newHead = dummy->next;
    delete dummy;
    return newHead;
    }
};