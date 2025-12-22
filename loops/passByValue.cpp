#include<iostream>
using namespace std;
void dummy(int n){
    n++;
    cout <<"n is in dummy : "<<n <<endl;
}
int main(){
    int n;
    cin>>n;
    cout<< "Before calling dummy, n is: " << n << endl;
    dummy(n);
}