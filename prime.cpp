#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        //if divide ho gya then not prime 
        if(n%i==0){
            cout<<"Not Prime for"<< i <<endl;
        }
        else{
            cout<<"Prime for" << i <<endl;

        }
        i++;
        
    }
}