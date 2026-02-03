#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end = size-1;
    int mid= start +(end-start)/2;
    // int mid= (start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        //go to right part 
        else if(key>arr[mid]){
            start = mid+1;
        }
        else{ // key is < arr[mid]
            end=mid-1;
        }
        mid= start +(end-start)/2;
    }
    return -1;
}  

int main(){
    int even[8]={2,4,5,6,7,8,9,10};
    int odd[5]={3,5,7,9,11};

    int evenIndex = binarySearch(even, 8, 6);
    cout << "Index of 6 in even array: " << evenIndex << endl;
    int oddIndex = binarySearch(odd, 5, 7);
    cout << "Index of 7 in odd array: " << oddIndex << endl;

}


