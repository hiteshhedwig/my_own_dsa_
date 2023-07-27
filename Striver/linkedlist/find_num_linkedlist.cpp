/****************************************************************

    Following is the class structure of the Node class:

    template <typename T>
    class Node
    {
    public:
        T data;
        Node<T> *next;
        Node()
        {
            this->data = 0;
            this->next = NULL;
        }
        Node(T data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(T data, T* next)
        {
            this->data = data;
            this->next = next;
        }
    };

*****************************************************************/

int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    auto curr_node = head;
    // auto next_node = head->next;
    while(curr_node!=nullptr) {
        if (curr_node->data == k) {
            return 1;
        }
        curr_node = curr_node->next;
    }
    return 0;
}