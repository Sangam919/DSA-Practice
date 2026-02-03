// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
    
//     int target;
//     cin >> target;
    
//     int first = -1, last = -1;
    
//     for(int i = 0; i < n; i++){
//         if(arr[i] == target){
//             if(first == -1)
//                 first = i;
//             last = i;
//         }
//     }
    
//     cout << "First Occurrence: " << first << endl;
//     cout << "Last Occurrence: " << last << endl;
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int LinearSearch(int arr[], int n, int x){
//     for(int i = 0; i < n; i++){
//         if(arr[i] == x) return i;
//     }
//     return -1;
// }

// int main(){
//     int arr[] = {10,20,30,40,50};
//     int n = 5;
//     int x = 40;
    
//     int index = LinearSearch(arr, n, x);
    
//     if(index != -1)
//         cout << "Element found at index: " << index;
//     else
//         cout << "Element not found";
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
    
//     int target;
//     cin >> target; 
    
//     bool exist = false;
    
//     for(int i = 0; i < n; i++){
//         if(arr[i] == target){
//             exist = true;
//             break;
//         }
//     }
    
//     cout << exist;   
// }



int firstOccurrence(vector<int>& arr, int size, int key) {
    int start = 0;
    int end = size - 1;
    int result = -1;

    int mid = start + (end - start) / 2;
    while (start <= end) {

        if (arr[mid] == key) {
            result = mid; 
            end = mid - 1; 
        } else if (key > arr[mid]) {
            start = mid + 1; 
        } else {
            end = mid - 1; 
        }
        mid = start + (end - start) / 2;
    }
    return result;
}