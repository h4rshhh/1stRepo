Node *evenAfterOdd(Node *head) {
    Node *oddHead = NULL;
    Node *oddTail = NULL;
    Node *evenHead = NULL;
    Node *evenTail = NULL;
    Node *temp = head;

    while (temp != NULL) {
        if (temp->data % 2 == 0) {
            if (evenHead == NULL) {
                evenHead = temp;
                evenTail = temp;  // Initialize evenTail when first even element is encountered
            } else {
                evenTail->next = temp;
                evenTail = evenTail->next;
            }
        } else {
            if (oddHead == NULL) {
                oddHead = temp;
                oddTail = temp;  // Initialize oddTail when first odd element is encountered
            } else {
                oddTail->next = temp;
                oddTail = oddTail->next;
            }
        }
        temp = temp->next;
    }
    if(oddHead == NULL){
        return evenHead;
    }
    oddTail -> next = evenHead;
    if(evenTail != NULL){
        evenTail -> next = NULL;
    }
    return oddHead;
}

