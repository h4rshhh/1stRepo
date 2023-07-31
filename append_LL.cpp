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
int len(Node* head){
	if(head == NULL){
		return 0;
	}
	return 1 + len(head -> next);
}

Node *appendLastNToFirst(Node *head, int n){

	int size = len(head);
	if(size <2 || n == 0){
		return head;
	}

	Node* temp = head;
	while(temp -> next != NULL){
		temp = temp -> next;
	}
	temp -> next = head;

	Node* current = head;
	Node* prev = NULL;
	for(int i = 0;i < size-n;i++){
		prev = current;
		current = current -> next;
	}	
	prev -> next = NULL;
	head = current;
	return head;	
}
