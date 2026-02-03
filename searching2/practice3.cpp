// input - 1 2 3 1 1 2 1 1 1 1   k = 4
// output = 4
// input = 1 2 3 k =3
// output = 2
#include<iostream>
using namespace std;
int main(){
    // int arr[10] = {1,2,3,1,1,2,1,1,1,1};
    // int k = 4;
    int arr[3] = {1,2,3};
    int k = 3;
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



// with sliding window
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++) cin >> arr[i];
    
//     int k;
//     cin >> k;
    
//     int left = 0, right = 0;
//     int sum = 0, countSub = 0;
    
//     while(right < n) {
//         sum += arr[right];
        
//         while(sum > k) {
//             sum -= arr[left];
//             left++;
//         }
        
//         if(sum == k) countSub++;
        
//         right++;
//     }
    
//     cout << countSub;
//     return 0;
// }
