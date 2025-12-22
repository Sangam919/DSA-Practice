#include<iostream>
using namespace std;
int firstOccurrence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int result = -1;

    int mid = start + (end - start) / 2;
    while (start <= end) {

        if (arr[mid] == key) {
            result = mid; // Found a potential first occurrence
            end = mid - 1; // Move left to find earlier occurrence
        } else if (key > arr[mid]) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
        mid = start + (end - start) / 2;
    }
    return result;
}
int lastOccurrence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int result = -1;

    int mid = start + (end - start) / 2;
    while (start <= end) {

        if (arr[mid] == key) {
            result = mid; // Found a potential first occurrence
            start = mid + 1; // Move right to find later occurrence
        } else if (key > arr[mid]) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
        mid = start + (end - start) / 2;
    }
    return result;
}

int main(){
    int even[5]={1,2,3,3,5};
    int key = 3;
    int index = firstOccurrence(even, 5, key);
    cout << "First occurrence of " << key << " is at index: " << index << endl;
    index = lastOccurrence(even, 5, key);
    cout << "Last occurrence of " << key << " is at index: " << index << endl;
    return 0;
}