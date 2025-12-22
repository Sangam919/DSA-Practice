#include<iostream>
using namespace std;

void countDown(int n) {
    // Base case
    if(n == 0) {
        return;
    }
    // cout << n << endl; // ulta printing
    
    countDown(n - 1); // Recursive call
    cout << n << endl; // seedha printing
}
int main() {
    int n;
    cin >> n;
    cout<< endl;
    countDown(n);
    return 0;
}