/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *reverseLinkedListRec(Node *head){
	if(head == NULL || head -> next == NULL){
		return head;
	}

	Node* head2 = reverseLinkedListRec(head -> next);
	Node* temp = head2;

	while(temp != NULL && temp -> next != NULL){
		temp = temp -> next;
	}
	temp -> next = head;
	head -> next = NULL;
	head = head2;

	return head;

}
