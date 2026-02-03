#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* createlinkedlist(int arr[], int index, int size){
    if(index == size){
        return NULL;
    }

    Node* temp = new Node(arr[index]);
    temp->next = createlinkedlist(arr, index + 1, size); // adddress return krta hai next node ka
    return temp;
}



int main(){
    int arr[] = {2,4,6,8,10};
    Node* head = createlinkedlist(arr, 0, 5);
    

    Node* temp;
    temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
} 