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

    bool isPalindrome(ListNode* head) {
        // Create a vector to store the values of the nodes
        std::vector<int> nodes;

        // Traverse the linked list and add each node's value to the vector
        while (head != nullptr) {
            nodes.push_back(head->val);
            head = head->next;
        }

        // Check if the vector is a palindrome
        for (int i = 0; i < nodes.size() / 2; i++) {
            if (nodes[i] != nodes[nodes.size() - i - 1]) {
                return false;
            }
        }

        return true;
    }
};