#include<iostream>
using namespace std;
bool search(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true; // key found
        }
    }
    return false; // key not found
}

int main(){
    int arr[10]={5,6,3,-7,9,2,-5,8,1,4};
    //check wheter 1 is presen in the array or not
    int key;
    cout<<"Enter the key you want to search: ";
    cin>>key;
    bool found = search(arr,10,key);
    if(found){ 
        cout<<"Key is present in the array"<<endl;
    }
    else{
        cout<<"Key is not present in the array"<<endl;
    }
}