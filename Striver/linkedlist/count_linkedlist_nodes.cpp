/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

int length(Node *head)
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