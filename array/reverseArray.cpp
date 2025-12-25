#include<iostream>
using namespace std;
void reverse(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]={1,4,8,6,0,4}; //even array
    int brr[5]={2,3,5,7,9};  //odd array
    
    reverse(arr,6);
    reverse(brr,5);

    printArray(arr, 6);
    printArray(brr, 5);


}
