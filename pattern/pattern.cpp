// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         int j =1;
//         while(j<=n){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
        
//     }
// }


// #include<iostream>
// using namespace std;    
// int main() {
//     int n;
//     cin >> n;
//     int i= 1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout << i << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
    
// }


// #include<iostream>
// using namespace std;    
// int main() {
//     int n;
//     cin >> n;
//     int i= 1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout << n-j+1 << " ";
//             j = j+ 1;
//         }
//         cout << endl;
//         i++;
//     }
    
// }


// #include<iostream>
// using namespace std;    
// int main() {
//     int n;
//     cin >> n;
//     int i= 1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout << j << " ";
//             j = j+ 1;
//         }
//         cout << endl;
//         i++;
//     }
    
// }



// reversed pattern
// #include<iostream>
// using namespace std;    
// int main() {
//     int n;
//     cin >> n;
//     int i= 1;
//     while(i<=n){
//         int j=n;
//         while(j>=1){
//             cout << j << " ";
//             j--;
//         }
//         cout << endl;
//         i++;
//     }

    
// }


// #include<iostream>
// using namespace std;    
// int main() {
//     int n;
//     cin >> n;

//     int i = 1;
//     int count = 1;
//     while (i <= n) {
//         int j = 1;
//         while (j <= n) {
//             cout << count << " ";
//             count++;
//             j++;    
//         }
//         cout << endl;
//         i++;
//     }

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row =1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<"*";
//             col++;

//         }
//         cout<<endl;
//         row++;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row << " ";
            col++;
        }
        cout<<endl;
        row++;
    }
}




// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<row << " ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count =1;
//     int row = 1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<count << " ";
//             col++;
//             count++;
//         }
//         cout<<endl;
//         row++;
//     }
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col=1;
//         // int val = row;  
//         while(col<=row){
//             cout<<(row + col -1) << " "; //  cout<<val << " ";
//             // val++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col=1;
//         // int val = row;  
//         while(col<=row){
//             cout<<(row - col + 1) << " "; //  cout<<val << " ";
//             // val++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col=1;  
//         while(col<=n){
//             char ch =('A' + row -1);
//             cout<<ch << " ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col=1;  
//         while(col<=n){
//             char ch =('A' + col -1);
//             cout<<ch << " ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }



// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int row = 1;
//     char ch = 'A';

//     while (row <= n) {
//         int col = 1;
//         while (col <= n) {
//             cout << ch << " ";
//             ch++;
//             col++;
//         }
//         cout << endl;
//         row++;
//     }

//     return 0;
// }






// A
// BB
// CCC
// DDDD

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col=1;  
//         while(col<=row){
//             char ch('A' + row - 1);
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }



// E 
// D D 
// C C C 
// B B B B 
// A A A A A 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col=1;  
//         while(col<=row){
//             char ch('A' + n - row);
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }