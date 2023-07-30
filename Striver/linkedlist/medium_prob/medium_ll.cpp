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
    ListNode* middleNode(ListNode* head) {
        if (head==nullptr){
            return head;
        }
        auto curr_node = head;
        // auto next_node = head->next;
        int count = 0;
        while(curr_node!=nullptr) {
            curr_node = curr_node->next;
            count+=1;
        }

        int mid = count/2 + 1 ;
        int recount=1;
        curr_node = head;
        while(curr_node!=nullptr) {
            if (recount==mid) {
                head = curr_node;
                break;
            }
            recount+=1;
            curr_node = curr_node->next;
        }

        return head;
    }
};