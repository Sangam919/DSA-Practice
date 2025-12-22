#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    // base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    // recursive case
    return linearSearch(arr+1, size-1, key);
}
int main(){
    int arr[5]={2,4,6,8,10};
    int size=5;
    int key = 7;
    bool ans = linearSearch(arr, size, key);
    if(ans){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }
    return 0;
}