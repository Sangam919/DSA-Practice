// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     int min, max;
//     cout << "Enter 5 integers: ";
//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }
//     min = max = arr[0];
//     for (int i = 1; i < 5; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     cout << "Minimum: " << min << endl;
//     cout << "Maximum: " << max << endl;
//     return 0;
// }




#include<iostream>
#include<limits.h>

using namespace std;
int getMin(int num[], int size){
    int min = INT_MAX;
    for(int i =0;i<size;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}
int getMax(int num[], int size){
    int maxi = INT_MIN;
    for(int i =0;i<size;i++){
        // if(num[i]>max){
        //     max=num[i];
        // }
        maxi = max(maxi, num[i]);
    }
    return maxi;
}

int main(){
    int size;
    cout << "Enter 5 integers: ";
    cin>>size;
    int num[100];

    // taking input in array     
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"The minimum value in the array is: "<<getMin(num, size)<<endl;
    cout<<"The maximum value in the array is: "<<getMax(num, size)<<endl;
}