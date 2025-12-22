#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    float ans=0;
    int i=0;
    while(n!=0){
        int bit = n & 1; // Get the last bit
        ans=(bit * pow(10,i)) +ans; // Set the bit at position i in ans

        n = n >> 1; // Right shift n to process the next bit
        i++; // Move to the next bit position
       
    }
    cout<<ans;
}



//dec to binary conversion of negative numbers
// #include <iostream>
// #include <bitset>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     // Show 8-bit two's complement binary
//     cout << bitset<8>(n) << endl;

//     return 0;
// }
