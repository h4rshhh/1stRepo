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

bool isPalindrome(Node *head){
	if(head == NULL){
		return true;
	}
	Node* start = head;
	Node* end = head;
	Node* prev = NULL;
	while(end -> next != NULL){
		prev = end;
		end = end -> next;
	}
	if(prev != NULL){
		prev -> next  = NULL;
	}	
	
	if(start -> data == end -> data){
		return isPalindrome(head -> next);
	}
	return false;

}
