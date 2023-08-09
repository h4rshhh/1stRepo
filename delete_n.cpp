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

Node *skipMdeleteN(Node *head, int M, int N){
	int count = 0;
	Node *temp = head;
	Node *prev = NULL;
	while(count < M && temp != NULL){
		prev = temp;
		temp = temp -> next;
		count++;
	}
}
