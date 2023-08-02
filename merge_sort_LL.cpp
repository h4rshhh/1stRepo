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
Node *midPoint(Node *head){
	if(head == NULL || head -> next == NULL){
		return head;
	}

	Node* slow = head;
	Node* fast = head -> next;
	while(fast != NULL && fast ->next != NULL){
		slow = slow -> next;
		fast = fast -> next -> next;
	}
	return slow;
}

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

Node *mergeSort(Node *head){
	if(head == NULL || head -> next ==NULL){
		return head;
	}
	
	Node *mid = midPoint(head);
	Node *h1 = mergeSort(mid -> next);
	mid -> next = NULL;
	Node *h2 = mergeSort(head);

	Node* newHead = mergeTwoSortedLinkedLists(h1, h2);
	return newHead;
}
