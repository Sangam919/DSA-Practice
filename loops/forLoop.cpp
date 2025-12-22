#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     cout<<i<<endl;
    // }
    
    // for(int a=0,b=1,c=2;a>=0 && b>=1 && c>=2;a--,b--,c--){
        //     cout<<a<<" "<<b<<" "<<c<<endl;
        
        // }
        


        // int n;
        // cin>>n;
        // int sum =0;
        // cout<<"Numbers from 1 to "<<n<<":"<<endl;
        // for(int i=1;i<=n;i++){
        //     cout<<i<<endl;
        //     sum += i;
        // }
        // cout<<"Sum: "<<sum<<endl;


        // int n;
        // int a=0;int b=1;
        // cout<<"Enter the number of terms in the Fibonacci series: ";
        // cin>>n;
        // cout<<"Fibonacci Series: ";
        // for(int i=1;i<=n;i++){
        //     cout<<a<<" ";
        //     int next = a + b;
        //     a = b;
        //     b = next;
        // }



        int n;
        cin>>n;
        for(int i=2;i<n;i++){
            if(n%i==0){
                cout<<"Not Prime"<<endl;
                break;
            }
            if(i == n-1){
                cout<<"Prime"<<endl;
            } 
            
        }
}