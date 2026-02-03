// #include<iostream>
// using namespace std;
// int binarysearch(int arr[],int n, int target){
//     int s=0,e=n-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]==target){
//             return mid;
//         }
//         else if(arr[mid]<target){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     int result=binarysearch(arr,n,target);
//     if(result!=-1){
//         cout<<"Element found at index: "<<result;
//     }
//     else{
//         cout<<"Element not found";
//     }
// }
// log(n) time complexity




