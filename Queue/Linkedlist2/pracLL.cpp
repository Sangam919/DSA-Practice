//doublylinkedList
// you have to insert at head 
// insert at tail
// insert at  given position
// delete node
#include<iostream>
using namespace std;
class Node{
    public:
        int data ;
        Node* next; Node* prev;
            Node(int d){
                data = d;
                next=NULL;
                prev=NULL;
            }
};
int main (){
    Node *n1= new Node(10);
    Node *n2=new Node(20);
    Node *n3=new Node(30);
    Node *n4=new Node(40);

    n1->next = n2;
    n2->prev = n1;
    n2->next = n3;
    n3->prev = n2;
    n3->next = n4;
    n4->prev = n3;
    cout<<n1->data<<" "<<n2->data<<" "<<n3->data<<" "<<n4   ->data<<endl;
    //print from prev
    cout<<n4->data<<" "<<n4->prev->data<<" "<<n4->prev->prev->data<<" "<<n4->prev->prev->prev->data<<endl;

    //inset at head
    // Node* head = n1;
    // Node* tail = n4;
    // Node* n0 = new Node(5);
    // n0->next = head;
    // head->prev = n0;
    // head = n0;
    // cout<<"after inserting at head "<<endl;
    // Node* temp = head;
    // while(temp != NULL){
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    // cout << endl;

    Node* head =n1;
    Node* tail = n4;
    Node * n0 = new Node(5);
    n0->next =head;
    head->prev = n0;
    head = n0;
    Node* temp = head;
    while(temp != NULL){
        cout << temp ->data <<" ";
        temp = temp->next;
    }
    cout<<endl;

    Node* n5 = new Node(50);
    tail->next = n5;
    n5->prev = tail;
    tail = n5;
    temp = head;
    while(temp!= NULL){
        cout << temp -> data << " ";
        temp = temp-> next;
    }



    // //insert at tail
    // Node* n5 = new Node(50);
    // tail->next = n5;
    // n5->prev = tail;
    // tail = n5;
    // cout<<"after inserting at tail "<<endl;
    // temp = head;
    // while(temp != NULL){
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    // //insert at position
    // int position =3;
    // Node* n6 = new Node(25);
    // temp = head;
    // int cnt =1;
    // while(cnt < position -1){
    //     temp = temp->next;
    //     cnt++;
    // }
    // n6->next = temp->next;
    // temp->next->prev = n6;
    // temp->next = n6;
    // n6->prev = temp;
    // cout<<endl<<"after inserting at position "<<position<<endl;
    // temp = head;
    // while(temp != NULL){
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    // cout << endl;
    // return 0;
}
