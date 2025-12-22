#include<iostream>
using namespace std;
int getsum(int arr[], int size){
    // base case
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    // recursive case
    int remainingpart = getsum(arr + 1, size - 1);
    return arr[0] + remainingpart;
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    int sum = getsum(arr, size);
    cout << "Sum of array elements: " << sum << endl;
    return 0;
}