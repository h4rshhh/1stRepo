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
// 3 4 1 2 6 5 9

Node *swapNodes(Node *head, int i, int j){
	if(head == NULL || head -> next == NULL || i == j){
		return head;
	}
	Node *iPoint = head;
	Node *jPoint = head;
	Node *iPrev = NULL;
	Node *jPrev = NULL;
	Node *iNext = NULL;

	for(int k = 0;k < i && iPoint != NULL;k++){
		iPrev = iPoint;
		iPoint = iPoint -> next;
	}
	if(iPoint != NULL){
		iNext = iPoint -> next;

	}

	for(int k = 0;k < j && jPoint != NULL;k++){
		jPrev = jPoint;
		jPoint = jPoint -> next;
	}
	if(iPoint == NULL || jPoint == NULL){
		return head;
	}
	if(i - j == 1 || i - j == -1){
		iPrev -> next = jPoint;
		iPoint -> next = jPoint -> next;
		jPoint -> next = iPoint;

	}
	else if (i == 0 || j == 0){
		iPoint -> next = jPoint -> next;
		jPoint -> next = iNext;
		jPrev -> next = iPoint;
		head = jPoint;
	}
	else{
	iPrev -> next = jPoint;
	jPrev -> next = iPoint;
	iPoint -> next = jPoint -> next;
	jPoint -> next = iNext;
	}
	return head;	

}
