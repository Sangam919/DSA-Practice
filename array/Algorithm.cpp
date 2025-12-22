#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 8, 1, 3};

    //binary search requires sorted array
    sort(arr.begin(), arr.end());
    int target = 9;
    bool found = binary_search(arr.begin(), arr.end(), target);
    if (found) {
        cout << "Element " << target << " found in the array." << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    // Sorting the array
    sort(arr.begin(), arr.end());

    cout << "Sorted array: ";
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << endl;

    // Finding an element
    int key = 3;
    auto it = find(arr.begin(), arr.end(), key);
    if (it != arr.end()) {
        cout << "Element " << key << " found at index: " << distance(arr.begin(), it) << endl;
    } else {
        cout << "Element " << key << " not found." << endl;
    }

    reverse(arr.begin(), arr.end());
    cout << "Reversed array: ";
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
