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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2){
	Node* Head = NULL;
	Node* Tail = NULL;

	if(head1 != NULL && head2 == NULL){
		Head = head1;
		Tail = head1;
		head1 = head1 -> next;
	}

	if(head1 == NULL && head2 != NULL){
		Head = head2;
		Tail = head2;
		head2 = head2 -> next;
	}	

	if(head1 != NULL && head2 != NULL){
		if(head1 -> data < head2 -> data){
			Head = head1;
			Tail = head1;
			head1 = head1 -> next;
		}
		else{
			Head = head2;
			Tail = head2;
			head2 = head2 -> next;
		}
	}
	while(head1 != NULL && head2 != NULL){
		if(head1 -> data < head2 -> data){		
			Tail -> next = head1;	
			Tail = head1;
			head1 = head1 -> next;
		}
		else{			
			Tail -> next = head2;
			Tail = head2;
			head2 = head2 -> next;
		}
	}
	
	while(head1 != NULL){
		Tail -> next = head1;
		Tail = head1;
		head1 = head1 -> next;
	}
	
	while(head2 != NULL){
		Tail -> next = head2;
		Tail = head2;
		head2 = head2 -> next;
	}
	

	return Head;

}
