#include<iostream>
using namespace std;
void printArray(int arr[], int size) {
    cout << "Array elements are: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int one[14]={1,2,3};

    int oneSize = sizeof(one) / sizeof(int);
    cout << "Size of one array: " << oneSize << endl;
    
    int n=14;
    printArray(one, 14);
    
    int two[10]={4,5};
    int twoSize = sizeof(two) / sizeof(int);
    cout << "Size of two array: " << twoSize << endl;

    
    n=10;
    printArray(two, 10);
    
}