#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){

    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1-j;i++){
            if(arr[i]> arr[i+1]) swap(arr[i],arr[i+1]);
        }
    }
}