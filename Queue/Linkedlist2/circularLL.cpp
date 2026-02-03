// // create a circular linked list and print it.
// #include <iostream>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* next;
//     Node* prev;
//     Node(int d) {
//         data = d;
//         next = NULL;
//         prev = NULL;
//     }
// };
// int main() {
//     Node* n1 = new Node(10);
//     Node* n2 = new Node(20);
//     Node* n3 = new Node(30);
//     Node* n4 = new Node(40);

//     n1->next = n2;
//     n2->prev = n1;
//     n2->next = n3;
//     n3->prev = n2;
//     n3->next = n4;
//     n4->prev = n3;
//     // Making it circular
//     n4->next = n1;
//     n1->prev = n4;

//     // Print the circular linked list starting from n1
//     Node* temp = n1;
//     cout << "Circular Linked List: ";
//     do {
//         cout << temp->data << " ";
//         temp = temp->next;
//     } while (temp != n1);
//     cout << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;
//     Node* prev;
//     Node(int d){
//         data = d;
//         next = NULL;
//         prev = NULL;
//     }
// };
// int main(){
//     Node* n1 = new Node(10);
//     Node* n2 = new Node(20);
//     Node* n3 = new Node(30);
//     Node* n4 = new Node(40);

//     n1->next =n2;
//     n2->prev =n1;
//     n2->next =n3;
//     n3->prev =n2;
//     n3->next =n4;
//     n4->prev =n3;
    
//     n4->next = n1;
//     n1->prev =n4;

//     Node* temp = n1;

//     do{

//         cout << temp-> data <<" ";
//         temp = temp->next;

//     }
//     while(temp != n1);
//     cout<< endl;

// }

// create a doubly linked list
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node *prev;
//         Node(int d){
//             data = d;
//             next = NULL;
//             prev = NULL;
//         }

// };
// int main(){
//     Node *n1= new Node(10);
//     Node *n2=new Node(20);
//     Node *n3=new Node(30);
//     Node *n4=new Node(40);

//     n1->next = n2;
//     n2->prev = n1;
//     n2->next = n3;
//     n3->prev = n2;
//     n3->next = n4;
//     n4->prev = n3;
//     cout<<n1->data<<" "<<n2->data<<" "<<n3->data<<" "<<n4   ->data<<endl;
//     //print from prev
//     cout<<n4->data<<" "<<n4->prev->data<<" "<<n4->prev->prev->data<<" "<<n4->prev->prev->prev->data<<endl;

// }


//now insertattail in circular linked list
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

    n4->next = n1;
    n1->prev = n4;

    Node* head =n1;
    Node* tail = n4;

    Node* n5 = new Node(50);
    tail->next = n5;
    n5->prev = tail;
    tail = n5;

    tail->next = head;
    head->prev = tail;

    Node* temp = head;                                  
    do{
        cout << temp ->data <<" ";
        temp = temp->next;
    }
    while(temp != head);
    cout<<endl;

}