#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    // base case
    if (size == 0 || size == 1) {
        return true;
    }

    if (arr[0] > arr[1]) {
        return false;
    }

    // recursive call
    return isSorted(arr + 1, size - 1);
}

int main() {
    int n;
    cin >> n;              // take size first

    int arr[n];            // now size is known
    for (int i = 0; i < n; i++) {
        cin >> arr[i];     // input array elements
    }

    bool ans = isSorted(arr, n);

    if (ans) {
        cout << "Array is sorted";
    } else {
        cout << "Array is not sorted";
    }

    return 0;
}
