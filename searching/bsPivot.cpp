#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
    int s =0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s= mid+1; // Pivot must be in the right half
        }
        else{
            e = mid; // mid could be the pivot
        }
        mid = s + (e-s)/2; // Recalculate mid

    }
    return s; // Pivot index
}
int main(){
    int arr[5]={3,8,10,17,1};
    cout<<"Pivot element is: "<<getPivot(arr, 5)<< endl;
}