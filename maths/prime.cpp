// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=2;
//     while(i<n){
//         //if divide ho gya then not prime 
//         if(n%i==0){
//             cout<<"Not Prime for"<< i <<endl;
//         }
//         else{
//             cout<<"Prime for" << i <<endl;

//         }
//         i++;
        
//     }
// }


#include<iostream>
using namespace std;

bool isPrime(int n) {

    if(n<=1)
    return false;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main() {

    int n;
    cin >> n;

    if(isPrime(n)) {
        cout << "It is a Prime Number" << endl;
    }
    else{
        cout << " It is not a Prime Number" << endl;
    }


    return 0;
}