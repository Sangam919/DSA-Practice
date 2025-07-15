// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         cout<<i<<" "<<endl;
//         i++;
//     }

// }


// findthe sum of first n natural numbers
// #include<iostream>
// using namespace std;   //formula also for this ques is n/2 * (a + l) where a is first term and l is last term
// int main(){
//     int n;
//     cin>>n;
//     int sum = 0;
//     int i =1;
//     while(i<=n){
//         sum = sum + i;
//         i = i+1;
//     }
//     cout<<"value of sum is: "<<sum<<endl;

// }




#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    int i = 1;

    while (i <= n) {
        if (i % 2 == 0)
            sum += i;
        i++;
    }

    cout << "Sum of even numbers up to " << n << " is: " << sum << endl;
    return 0;
}
