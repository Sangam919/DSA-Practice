// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans=0;
//     int digit =1;
//     while(n!=0){
//         int lastdigit = n%10;  // or int lastdigit = n&1; 
//         ans = ans + (lastdigit * digit);
//         n = n/10;
//         digit = digit * 2;
//     }
//     cout<<ans;
// } 



#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0){
        int lastdigit = n%10;
        if(lastdigit == 1){
            ans = ans + pow(2 , i);
        }
        n = n/10;
        i++;
    }
    cout<<ans;
}