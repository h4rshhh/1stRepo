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

Node *removeDuplicates(Node *head){
	if(head == NULL || head -> next == NULL){
		return head;
	}
	Node* temp = head;   
	while(temp -> next != NULL){
		if(temp->data==temp->next->data){
			temp->next=temp->next->next;
		}else{
			temp=temp->next;
		}
	}
	return head;
}
