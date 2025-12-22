
//     * 
//    * * 
//   * * *
//  * * * *
// * * * * *
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int space =n - row;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int col=1;
//         while(col<=row){
//             cout<<"*"<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }



// *    
// **   
// ***
// ****
// *****
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<"*";
//             col++;
//         }
//         int space =n - row;
//         while(space){
//             cout<<" ";
//             space= space - 1;
//         }
//         cout<<endl;
//         row++;
//     }
// }



//     *
//    **
//   ***
//  ****
// *****
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int space =n - row;
//         while(space){
//             cout<<" ";
//             space= space - 1;
//         }
//         int col=1;
//         while(col<=row){
//             cout<<"*";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }




// *****
//  ****
//   ***
//    **
//     *
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int space =row-1;
//         while(space){
//             cout<<" ";
//             space= space - 1;
//         }
//         int col=1;
//         while(col<=n-row+1){
//             cout<<"*";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }



//     1
//    121
//   12321
//  1234321
// 123454321   
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int space =n - row;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int col=1;
//         while(col<=row){
//             cout<<col;
//             col++;
//         }
//         int dec = row - 1;
//         while(dec){
//             cout<<dec;
//             dec--;
//         }
//         cout<<endl;
//         row++;
//     }
// }




// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=n-row+1){
//             cout<<col;
//             col++;
//         }

//         int mid=1;
//         while(mid<=2*(row-1)){
//             cout<<"*";
//             mid++;
//         }
//         int dec=n-row+1;
//         while(dec>=1){
//             cout<<dec;
//             dec--;
//         }
//         cout<<endl;
//         row++;
//     }
// }
