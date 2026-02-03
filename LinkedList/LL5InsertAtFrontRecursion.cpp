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
Node*  createlinkedlist(int arr[],int index,int size, Node* prev){
    if(index == size){
        return prev;
    }

        Node* temp;
        temp = new Node(arr[index]);
        temp -> next = prev;

        return createlinkedlist(arr,index+1,size,temp);


}

int main(){
    Node* head;
    head = NULL;
    int arr[] = {2,4,6,8,10};
    head = createlinkedlist(arr, 0, 5,head);
    

    Node* temp;
    temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
} 