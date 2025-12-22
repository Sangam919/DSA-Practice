#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==0){
        return 1;
    }
    int smallAns = factorial(n-1);
    int biggerAns = n * smallAns;
    return biggerAns;
    // return n*factorial(n-1);  // can also be written like this all upper 3 lines in one line
}

//maan lo 5 ka factiral nikalne ko khe to 5! = 5 * 4!! 
// ab 4! ko nikalne ke liye 4 * 3!
// to aise hi base case pe aake hum return karenge 1 means 0! = 1


int main(){
    int n;
    cin>> n;
    
    int ans = factorial(n);
     cout << ans << endl;
    return 0;
}