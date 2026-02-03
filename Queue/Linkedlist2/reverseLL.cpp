#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }
};

int main(){
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);

    // linking
    n1->next = n2;
    n2->prev = n1;
    n2->next = n3;
    n3->prev = n2;
    n3->next = n4;
    n4->prev = n3;

    // go to last node
    Node* temp = n1;
    while(temp->next != NULL){
        temp = temp->next;
    }

    // reverse print
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->prev;
    }

    return 0;
}
