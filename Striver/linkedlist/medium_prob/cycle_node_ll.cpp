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
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) {
        return NULL;  // no cycle if list has 1 or 0 elements
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while (true) {
            if (fast == NULL || fast->next == NULL) {
                return NULL;  // no cycle if fast hits the end of the list
            }
            
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) {  // cycle detected
                break;
            }
        }
        
        // reset slow to the head
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        // when slow == fast again, they meet at the start of the cycle
        return slow;
    }
};


// The key to understanding this part of Floyd's cycle-finding algorithm relies on the properties of the distances involved when a cycle is present in the linked list.

// Let's denote:

//     H as the distance from the head of the list to the start of the cycle,
//     D as the distance from the start of the cycle to the point where the slow and fast pointers meet within the cycle,
//     C as the circumference of the cycle (the number of nodes in the cycle).

// The slow pointer moves one step at a time, so when it meets the fast pointer within the cycle, it has moved H + D steps.

// On the other hand, the fast pointer moves two steps at a time, so when it meets the slow pointer, it has moved 2*(H + D) steps. However, because the fast pointer might have made several laps around the cycle by the time it meets the slow pointer, we can also express its total steps as H + D + n*C, where n is the number of times the fast pointer has lapped around the cycle.

// Setting these two expressions for the fast pointer's total steps equal to each other, we get 2*(H + D) = H + D + n*C. After simplifying this equation, we get H = n*C - D.

// This means the distance from the head of the list to the start of the cycle (H) is the same as the number of nodes covered by fast in full cycle(s) (n*C) minus the distance from the meeting point to the start of the cycle (D).

// So if we reset the slow pointer to the head of the list and move both slow and fast pointers one step at a time, they will meet again exactly at the start of the cycle. The slow pointer moves H steps to get to the start of the cycle, and the fast pointer also moves H steps (which is n*C - D, so it completes its laps and reaches the same node), causing them to meet at the start of the cycle.
// Sure, let's take a simple example. Let's suppose we have the following linked list with a cycle:

// rust

// 1 -> 2 -> 3 -> 4 -> 5
//           ^         |
//           |         v
//           8 <- 7 <- 6

// In this list, 3 is the start of the cycle and the list cycles back from 8 to 3.

// When we start moving the slow and fast pointers, they will eventually meet inside the cycle. Let's say they meet at node 6.

// At this point, slow has moved 5 steps (1->2->3->4->5->6), and fast has moved 10 steps (1->2->3->4->5->6->7->8->3->4->5->6). As you can see, fast has taken one extra loop through the cycle.

// When we detect the cycle (because slow == fast), we move slow back to the head of the list (1), but leave fast at their meeting point (6).

// Now we start moving both slow and fast one step at a time. slow will take 3 steps to reach the start of the cycle (1->2->3), and if you look at fast, it also takes 3 steps to reach the start of the cycle from its current position (6->7->8->3).

// So, they will both reach the node 3 at the same time, and this is the point where they meet again. This meeting point is the start of the cycle in the linked list. So we return this node as the result of the function.