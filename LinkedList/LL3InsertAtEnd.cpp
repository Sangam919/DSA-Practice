//  insert a node from last
#include<iostream>
using namespace std;
class Node{
    public:
        int data ;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
};
int main(){
    
    Node *head;
    Node* tail;
    head=NULL;
    tail=NULL;
    int arr[] ={2,4,6,8,10};

    for(int i=0;i<5;i++){
        if(head==NULL){
            head = new Node(arr[i]);
            tail = head;
        }
        else{
            tail->next = new Node(arr[i]);
            tail = tail->next ;

        }
    }
    Node* temp;
    temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
}