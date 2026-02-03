#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        // it is a constuctor to initialize value
        Node(int value){
            data = value;
            next = NULL;
        }

};
int main(){
    Node* Head;
    Head = new Node(4);
    cout<< Head->data<<endl;
    cout<<Head->next<<endl;
}

//inser at front if the linked list not exist
// if(Head == NULL){
//     Head =new Node(10);
// }


//insert at front if linked list exist
// else
// Node* temp;
// temp = new Node(10);
// temp -> next = Head;
// Head = temp;

