// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int data){
//         this-> data = data;
//         next=NULL;
//     }
// };
// int main(){
//     Node n1(10);
//     Node n2(20);
//     n1.next = &n2;
//     cout<<"n1.next ="<<n1.data << endl;
//     cout <<"n1.next =" <<n1.next <<endl;
//     cout<< "n1.next.data ="<<n1.next->data<<endl;   
// }

//create a linked list of size 5
// int main(){
//     Node n1(10);
//     Node n2(20);
//     Node n3(30);
//     Node n4(40);
//     Node n5(50);
//     n1.next = &n2;
//     cout<<"n1.next ="<<n1.data << endl;
//     cout<<"n2.next ="<<n2.data << endl;
//     cout<<"n3.next ="<<n3.data << endl;
//     cout<<"n4.next ="<<n4.data << endl;
//     cout<<"n5.next ="<<n5.data << endl;
    

// }




// #include<bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
    
//     Node(int data) {
//         this->data = data;
//         next = NULL;
//     }
// };

// int main() {
//     Node* n1 = new Node(10);
//     Node* n2 = new Node(20);
//     Node* n3 = new Node(30);
//     Node* n4 = new Node(40);
//     Node* n5 = new Node(50);

//     // Linking nodes
//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     n4->next = n5;

    
//     Node* head = n1;

    
//     Node* temp = head;
//     while(temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }




