#include<iostream>
using namespace std;

// void fibonacci(int n){
//     int t1 = 0;
//     int t2 = 1;
//     int nextTerm;

//     for(int i=1; i<=n; i++){
//         cout<<t1<<endl;
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }
// }


void fibonacci(int n, int t1 = 0, int t2 = 1) {
    if(n == 0)
        return;

    cout << t1 << endl;
    fibonacci(n - 1, t2, t1 + t2);
}

int main() {
    int n;
    cin >> n;

    fibonacci(n);
    return 0;
}




// #include<iostream>
// using namespace std;

// int fibonacci(int n){
//     if(n == 0)
//         return 0;
//     if(n == 1)
//         return 1;
//     return fibonacci(n-1) + fibonacci(n-2);
// }

// int main(){
//     int n;
//     cin >> n;

//     for(int i = 0; i < n; i++){
//         cout << fibonacci(i) << endl;
//     }
//     return 0;
// }
