// #include<bits/stdc++.h>
// using namespace std;

// void swapalternate(int arr[], int n){
//     for(int i=0; i < n-1; i += 2){
//         swap(arr[i], arr[i+1]);
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     swapalternate(arr, n);  // swap first
    
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }

// 6
// 1 2 3 4 5 6
// 2 1 4 3 6 5 


//count freq of elements
// #include <iostream>
// #include <unordered_map>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     unordered_map<int, int> freqMap;
//     for(int i=0; i<n; i++){
//         freqMap[arr[i]]++;
//     }

//     for(const auto& pair : freqMap){
//         cout << pair.first << " occurs " << pair.second << " times" << endl;
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;
// void reverseArray(int arr[], int n){
//     int start = 0;
//     int end = n - 1;
//     while(start < end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     reverseArray(arr, n);  // reverse array
    
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }







// #include <iostream>
// using namespace std;
// void createArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         arr[i] = i + 1;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
    
//     createArray(arr, n);  // create array
    
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int freq(int arr[], int n, int x){
//     int count = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i] == x){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     int n, x;
//     cin >> n;
//     int arr[n];
    
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     cin >> x;

//     cout << freq(arr, n, x);  // frequency of x in array
    
//     return 0;
// }



//sort 0 1
// ques = input = 0 1 0 1 0 1
// output = 0 0 0 1 1 1
// without sorting do with frequency

// #include<iostream>
// using namespace std;
// void sort01(int arr[], int n){
//     int j =0;
//     for(int i=0;i<n;i++){
//         if(arr[i] == 0){
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }

// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     sort01(arr, n);  // sort hoga 0 and 1
    
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
    
//     int count0 = 0, count1 = 0;
    
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//         if(arr[i] == 0) count0++;
//         else count1++;
//     }
    
//     // Rewrite array without sorting
//     for(int i=0; i<count0; i++) arr[i] = 0;
//     for(int i=count0; i<n; i++) arr[i] = 1;
    
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }





// // sort 0 1 2

// #include<iostream>
// using namespace std;
// void sort012(int arr[], int n){
//     int low = 0, mid = 0, high = n - 1;
//     while(mid <= high){
//         if(arr[mid] == 0){
//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         }
//         else if(arr[mid] == 1){
//             mid++;
//         }
//         else{
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     sort012(arr, n);  // sort 0, 1 and 2
    
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];

//     int count0 = 0, count1 = 0, count2 =0;

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         if(arr[i] == 0) count0++;
//         else if(arr[i] == 1) count1++;
//         else count2++;
//     }

//     for(int i=0;i<count0;i++) arr[i] =0;
//     for(int i=count0;i<count0+count1;i++) arr[i] = 1;
//     for(int i=count0+count1;i<n;i++) arr[i] = 2;

//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }

// }
// 8
// 0 1 0 1 2 2 0 2
// 0 0 0 1 1 2 2 2



//find duplicate
// #include<iostream>
// using namespace std;

// void findduplicate(int arr[], int n){
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i] == arr[j]){
//                 cout <<  arr[i] << " ";
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     findduplicate(arr, n);  
    
//     return 0;
// }
                                                                                  




// 0 at the end 
// #include<iostream>
// using namespace std;
// void sort01(int arr[], int n){
//     int j =0;
//     for(int i=0;i<n;i++){
//         if(arr[i] != 0){
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }

// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     sort01(arr, n);  // sort 0 and 1
    
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }
//5
// 0 1 8 4 0
// 1 8 4 0 0


//rotate array by 1
//input 1 2 3 4 5
// o/p=  5 1 2 3 4

// #include<iostream>
// using namespace std;

// void rotateby1(int arr[], int n){
//     int temp = arr[n-1];
//     for(int i=n-1; i>0; i--){
//         arr[i] = arr[i-1];
//     }
//     arr[0] = temp;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     rotateby1(arr, n);

//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }

// }



// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][3];
//     for(int i=0; i<2; i++){
//         for(int j=0; j<3; j++){
//             cin >> arr[i][j];
//         }
//     }
//     for(int i=0; i<2; i++){
//         for(int j=0; j<3; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout<< "column wise print"<< endl;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<2; j++){
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }
// }





// input  = 1 2 3
//          4 5 6
//          7 8 9

// output = find some of every row and column
// and
// output = find some of diagonals
// and
// output = print wave print 1 4 7 8 5 2 3 6 9

#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    //sum  of rows 
    for(int i=0;i<3;i++){
        int row =0;
        for(int j=0;j<3;j++){
            row = row + arr[i][j];
        }
        cout<< row <<endl;
    }
    // sum of column
    for(int j=0;j<3;j++){
        int col =0;
        for(int i=0;i<3;i++){
            col = col + arr[i][j];
        }
        cout << col <<endl;
    }

    //sum of diagonals
    cout << endl;
    cout<< "sum of diagonals"<< endl;
    int diag1 = 0, diag2 = 0;
    for(int i=0;i<3;i++){
        diag1 = diag1 + arr[i][i];
        diag2 = diag2 + arr[i][2-i];
    }
    cout <<"diag1 "<< diag1 << endl;
    cout <<"diag2 "<< diag2 << endl;


    //wave print
    cout << "wave print" << endl;
    for(int j=0;j<3;j++){
        if(j% 2 == 0){
            for(int i=0;i<3;i++){
                cout<<arr[i][j]<<" ";
            }

        }
        else{
            for(int i=2;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }

    }
    return 0;


}