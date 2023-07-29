/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int value;
 *      Node *prev;
 *      Node *next;
 *      Node() : value(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/
// auto new_node = new Node(k);

//     if (head == nullptr) {
//         return new_node;
//     }

//     if (head->next == nullptr) {
//         head->next = new_node;
//         new_node->prev = head;
//         return head;
//     }

//     Node* current_node = head;
//     while (current_node->next != nullptr) {
//         current_node = current_node->next;
//     }

//     current_node->next = new_node;
//     new_node->prev = current_node;

//     return head;
Node * insertAtTail(Node *head, int k) {
    // Write your code here
    Node* tail_node = new Node(k);

    if (head == nullptr) {
        return tail_node;
    }

    Node* current_node = head->next;
    while(current_node!=nullptr) {
        // if current node is a tail one then append!
        if (current_node->next == nullptr) {
            current_node->next = tail_node;
            tail_node->prev = current_node;
            break;
        } else {
            current_node = current_node->next;
        }
    }

    return head;
}

