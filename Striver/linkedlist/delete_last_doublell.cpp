/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {
    // Write your code here
    if (head->next == nullptr) {
        return head->prev;
    }

    Node* current_node = head->next;
    while(current_node!=nullptr) {
        // if current node is a last one, then \
        // second last node next = null and
        if ((current_node->next == nullptr )&&(current_node->prev != nullptr)) {
            current_node->prev->next = nullptr;
            break;
        } else {
            current_node = current_node->next;
        }
    }

    return head;
}
