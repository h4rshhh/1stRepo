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
class Pair{
	public:
	Node *Head;
	Node *Tail;
};

Pair smallReverse(Node *start, Node *end){
	Pair var;
	if(start == end){
		var.Head = start;
		var.Tail = start;
		return var;
	}
	var = smallReverse(start -> next,end);
	var.Tail -> next = start;

	Pair ans;
	ans.Head = var.Head;
	ans.Tail = start;

	return ans;
}

Node *kReverse(Node *head, int k){
	if(head == NULL || head -> next == NULL){
		return head;
	}
	Node *h = head;
	Node *t = head;
	for(int i = 0;i<k-1 && t -> next != NULL;i++){
		t = t -> next;
	}
	Node *temp = t -> next;

	Pair ans = smallReverse(h,t);
	ans.Tail -> next  = temp;
	
	Node *temp2 = kReverse(temp,k);
	ans.Tail -> next = temp2;

	return ans.Head;
	
}
