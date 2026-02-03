
// length of longest subarray having sum = k 
// input - 1 2 3 1 1 2 1 1 1 1   k = 4
// output = 4
// input = 1 2 3 k =3
// output = 2  

// #include<iostream>
// using namespace std;

// void longestSubarrayWithSumK(int arr[], int n, int k){
//     int maxLength = 0;
//     for(int i=0; i<n; i++){
//         int sum = 0;
//         for(int j=i; j<n; j++){
//             sum += arr[j];
//             if(sum == k){
//                 maxLength = max(maxLength, j - i + 1);
//             }
//         }
//     }
//     cout  << "output is: " << maxLength << endl;
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     int k;
//     cin >> k;
//     longestSubarrayWithSumK(arr, n, k);
//     return 0;
// }

// do with nested loop 
// then do with optimised approach using hashmap
// input - 1 2 3 1 1 2 1 1 1 1   k = 4
// output = 4
// input = 1 2 3 k =3
// output = 2
#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,1,1,2,1,1,1,1};
    int k = 4;
    int maxLength = 0;
    for(int i=0; i<10; i++){
        int sum = 0;
        for(int j=i; j<10; j++){
            sum += arr[j];
            if(sum == k){
                maxLength = max(maxLength, j - i + 1);
            }
        }
    }
    cout  << "output is: " << maxLength << endl;
    return 0;
}

// optimised approach using wlindow sliding technique
// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//     // int arr[10] = {1,2,3,1,1,2,1,1,1,1};
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     int k = 4;
//     unordered_map<int, int> prefixSumMap;
//     int sum = 0;
//     int maxLength = 0;
//     for(int i=0; i<n; i++){
//         sum += arr[i];
//         if(sum == k){
//             maxLength = i + 1;
//         }
//         if(prefixSumMap.find(sum - k) != prefixSumMap.end()){
//             maxLength = max(maxLength, i - prefixSumMap[sum - k]);
//         }
//         if(prefixSumMap.find(sum) == prefixSumMap.end()){
//             prefixSumMap[sum] = i;
//         }
//     }
//     cout  << "output is: " << maxLength << endl;
//     return 0;
// }
