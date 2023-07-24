#include <iostream>
#include "Node.cpp"
using namespace std;

Node* takeinput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = head;
        }
        else{
            tail -> next = newNode;
            tail = tail -> next;
        }
        cin>>data;
    }
    return head;

}

int main(){
    Node* head = takeinput();
    print(head);
    return 0;
}
