// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//         Node(int d){
//             data = d;
//             next = NULL;
//         }

// };
// int main(){
    //static 
    // Node n1(10);
    // Node n2(20);
    // Node n3(30);
    // Node n4(40);
    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // cout<<n1.data<<endl;
    // cout<<n2.data<<endl;
    // cout<<n3.data<<endl;
    // cout<<n4.data<<endl;
    // cout<<n1.next;
    

    //dynamic linked list
    // int arr[4];
    // Node *n1 = new Node(150);
    // Node *n2 = new Node(30);
    // Node *n3 = new Node(20);
    // Node *n4 = new Node(20);
    // Node *n5 = new Node(50);
    // n1->next = n2;
    // n2->next = n3;
    // n3->next = n4;
    // n4->next = n5;
    // cout<<n1->data<<endl;
    // cout<<n2->data<<endl;
    // cout<<n3->data<<endl;
    // cout<<n4->data<<endl;
    // cout<<n5->data<<endl;

// }




// #include<bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void printlinkedlist(Node* head) {
//     while(head != NULL) {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

// int main(){
//     Node* n1 = new Node(10);
//     Node* n2 = new Node(20);
//     Node* n3 = new Node(30);
//     Node* n4 = new Node(40);
//     Node* n5 = new Node(50);

//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     n4->next = n5;

//     Node* head = n1;

//     printlinkedlist(head);

//     return 0;
// }




//reverse 50 40 30 20 10
// #include<bits/stdc++.h>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node* reverseLinkedList(Node* head) {
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* next = NULL;

//     while (curr != NULL) {
//         next = curr->next; // Store next node
//         curr->next = prev; // Reverse current node's pointer
//         prev = curr;       // Move pointers one position ahead
//         curr = next;
//     }
//     return prev; // New head of the reversed list
// }
// void printlinkedlist(Node* head) {
//     while(head != NULL) {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }
// int main(){
//     Node* n1 = new Node(10);
//     Node* n2 = new Node(20);
//     Node* n3 = new Node(30);
//     Node* n4 = new Node(40);
//     Node* n5 = new Node(50);

//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     n4->next = n5;

//     Node* head = n1;

//     head = reverseLinkedList(head);

//     printlinkedlist(head);

//     return 0;
// }


// print 50 10 20 30 40
// #include<bits/stdc++.h>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node* insertAtHead(Node* head, int data) {
//     Node* newNode = new Node(data);
//     newNode->next = head;
//     return newNode; // New head of the list
// }
// void printlinkedlist(Node* head) {
//     while(head != NULL) {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }
// int main(){
//     Node* n1 = new Node(10);
//     Node* n2 = new Node(20);
//     Node* n3 = new Node(30);
//     Node* n4 = new Node(40);
//     Node* n5 = new Node(50);

//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     n4->next = n5;

//     Node* head = n1;

//     head = insertAtHead(head, 50);

//     printlinkedlist(head);

//     return 0;
// }


// insert in linked list 
// #include<bits/stdc++.h>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node* insertAtPosition(Node* head, int data, int position) {
//     Node* newNode = new Node(data);
//     if (position == 0) {
//         newNode->next = head;
//         return newNode; // New head of the list
//     }
    
//     Node* temp = head;
//     for (int i = 0; i < position - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }
    
//     if (temp != NULL) {
//         newNode->next = temp->next;
//         temp->next = newNode;
//     }
    
//     return head; // Head remains unchanged
// }
// void printlinkedlist(Node* head) {
//     while(head != NULL) {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }
// int main(){
//     Node* n1 = new Node(10);
//     Node* n2 = new Node(20);
//     Node* n3 = new Node(30);
//     Node* n4 = new Node(40);
//     Node* n5 = new Node(50);

//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     n4->next = n5;

//     Node* head = n1;

//     head = insertAtPosition(head, 25, 2);

//     printlinkedlist(head);

//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node *temp =head,temp1 =NULL,temp2 =NULL,int c =0;
// while(temp !=NULL){
//     if(c==ps-1)
//         temp1 = temp; 
//     if(pos==c)
//         temp2 = temp;
//     temp = temp->next;
//     c++;
// }
// if(c>pos) return head;
// temp1->next =newNode;
// newNode->next = temp2;
// return head;



// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//         Node(int d){
//             data = d;
//             next =NULL;

//         }

// }
// Node *takeinput(){
//     int n,data;

//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>data;
//         Node *newNode = new Node(data);
//         if(head==NULL){
//             head = newNode;
//             tail = newNode;
//         }
//         else{
//             tail->next = newNode;
//             tail = tail->next;
//         }
//     }
//     return head;
// }


// Node *takeinput(){
//     int data;
//     cin>>data;
//     if(data==-1){
//         return NULL;
//     }
//     Node *head =NULL;
//     Node *tail = NULL;
//     while(data!=-1){
//         Node *newNode = new Node(data);
//         if(head==NULL){
//             head = newNode; 
//             tail = newNode;
//         }
//         else{
//             tail->next = newNode;
//             tail = tail->next;
//         }
//         cin>>data;
//     }
//     return head;
// }



// int main(){
//     Node *head = takeinput();
//     return 0;
// }



#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

Node* takeinput(){
    int data;
    cin >> data;

    Node* head = NULL;
    Node* tail = NULL;

    while(data != -1){
        Node* newNode = new Node(data);

        if(head == NULL){
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    Node* head = takeinput();
    print(head);
    return 0;
}
