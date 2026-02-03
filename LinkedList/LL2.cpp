//Insert a node in linked list or insert a values in linked list in front

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    // constructor
    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){
    int arr[4] = {10, 20, 30, 40};

    Node* head = NULL;

    for(int i = 0; i < 4; i++){
        if(head == NULL){
            head = new Node(arr[i]);
        }
        else{
            Node* temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
        }
    } 

    // print linked list
    Node* curr = head;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }

    return 0;
}
