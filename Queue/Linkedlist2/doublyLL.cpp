// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         int data ;
//         Node* next; Node* prev;
//             Node(int d){
//                 data = d;
//                 next=NULL;
//                 prev=NULL;
//             }
// };
// int main (){
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
//     return 0;
// }



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

    // // forward print using while
    // Node* temp = n1;
    // while(temp != NULL){
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    // cout << endl;

    // // backward print using while
    // temp = n4;
    // while(temp != NULL){
    //     cout << temp->data << " ";
    //     temp = temp->prev;
    // }
    // cout << endl;

    // return 0;


    Node* front = n1;
    Node* back = n4;

    while(front != NULL && back != NULL){
        cout << front->data;
        cout <<" "<< back->data << endl;

        front = front->next;
        back = back->prev;
    }
}



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
//     Node *n1 = new Node(10);
//     Node *n2 = new Node(20);
//     Node *n3 = new Node(30);
//     Node *n4 = new Node(40);

//     // linking
//     n1->next = n2;
//     n2->prev = n1;
//     n2->next = n3;
//     n3->prev = n2;
//     n3->next = n4;
//     n4->prev = n3;

//     Node* front = n1;
//     Node* back = n4;

//     while(front != NULL && back != NULL){
//         cout << "Front: " << front->data;
//         cout << "  Back: " << back->data << endl;

//         front = front->next;
//         back = back->prev;
//     }

//     return 0;
// }
