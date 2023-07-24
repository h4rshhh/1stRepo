#include <iostream>
using namespace std;

class Node{
    public :
    int data;
    Node *next;

    Node(int data){
        this -> data = data;
        next = NULL;
    }    
};

void print(Node *head){
        Node *temp = head;
        for(;temp != NULL;temp = temp -> next){
            cout<<temp -> data<<" ";
        }
        cout<<endl;
    }

int main(){
    Node n1(10);
    Node *head = &n1;

    Node n2(20);
    Node n3(30);
    Node n4(40);
    Node n5(50);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    print(head);
    

    /*    
    Node n1(7);
    Node*head = &n1;

    Node n2(19);
    n1.next = &n2;

    Node n3(16);
    n2.next = &n3;

    cout<<head -> data<<" "<<head -> next -> data<<" "<<head -> next -> next -> data;
*/
    

    return 0;
}

