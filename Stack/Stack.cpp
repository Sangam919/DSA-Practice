// #include<stack>
// #include<iostream>
// using namespace std;

// void apnastack(){
//     stack<int> s1;
//     s1.push(10);
//     s1.push(20);
//     s1.push(30);
//     cout<<s1.top()<<endl;
//     s1.pop();
//     cout<<"After deleting"<<endl;
//     cout<<s1.top()<<endl;
// }

// int main(){
//     apnastack();
//     // stack<int> s1;
//     // s1.push(10);
//     // s1.push(20);
//     // s1.push(30);
//     // // cout<<s1.top()<<endl;
//     // // s1.pop();
//     // // cout<<"After deleting"<<endl;
//     // // cout<<s1.top()<<endl;

//     // while(!s1.empty()){
//     //     cout<<s1.top()<<" ";
//     //     s1.pop();
//     // }

// } 


// #include<stack>
// #include<iostream>
// using namespace std;
// class StackLL{
//     public:
//     class Node{
//         public:
//         int data;
//         Node* next;
//         Node(int d){
//             data = d;
//             next = NULL;
//         }
//     };
//     Node* head;
//     StackLL(){
//         head = NULL;
//     }
//     void push(int d){
//         Node* newNode = new Node(d);
//         if(!head){
//             head = newNode;
//             return;
//         }
//         newNode->next = head;
//         head = newNode;
//     }
//     void pop(){
//         if(!head) return;
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     }
//     int top(){
//         if(!head) return -1;
//         return head->data;
//     }
//     bool empty(){
//         return head == NULL;
//     }
// };
// int main(){
//     StackLL s1;
//     s1.push(10);
//     s1.push(20);
//     s1.push(30);
//     cout<<s1.top()<<endl;
//     s1.pop();
//     cout<<"After deleting"<<endl;
//     cout<<s1.top()<<endl;

//     while(!s1.empty()){
//         cout<<s1.top()<<" ";
//         s1.pop();
//     }

// }