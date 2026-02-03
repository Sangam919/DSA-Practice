// #include<iostream>
// #include<Stack>
// using namespace std;
// int main(){
    //     stack<int> s1;
    //     s1.push(10);
    //     s1.push(20);
    //     s1.push(30);
    //     if(s1.top()%2 == 0) s1.pop();
    //     cout<<s1.top()<<endl;
    
    // }
    
    
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     int arr[] = {3, 5, 4, 7, 2};
//     int n = 5;
//     int ans[n];
//     stack<int> s1;

//     for (int i = n - 1; i >= 0; i--) {
//         while (!s1.empty() && s1.top() <= arr[i]) {
//             s1.pop();
//         }

//         if (s1.empty())
//             ans[i] = -1;
//         else
//             ans[i] = s1.top();

//         s1.push(arr[i]);
//     }

//     for (int i = 0; i < n; i++)
//         cout << ans[i] << " ";

//     return 0;
// }
// Explanation (short)
// Traverse from right to left
// Maintain a monotonic decreasing stack
// Top of stack gives next greater element
// If stack empty → -1




//     //prev greater  //smaller element
//     // next smaller element

// 1. Previous Greater Element (to the LEFT)
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     int arr[] = {3, 5, 4, 7, 2};
//     int n = 5;
//     int ans[n];

//     stack<int> s;

//     for (int i = 0; i < n; i++) {
//         while (!s.empty() && s.top() <= arr[i]) {
//             s.pop();
//         }

//         if (s.empty())
//             ans[i] = -1;
//         else
//             ans[i] = s.top();

//         s.push(arr[i]);
//     }

//     for (int i = 0; i < n; i++)
//         cout << ans[i] << " ";

//     return 0;
// }



// Next Smaller Element (to the RIGHT)
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     int arr[] = {3, 5, 4, 7, 2};
//     int n = 5;
//     int ans[n];

//     stack<int> s;

//     for (int i = n - 1; i >= 0; i--) {
//         while (!s.empty() && s.top() >= arr[i]) {
//             s.pop();
//         }

//         if (s.empty())
//             ans[i] = -1;
//         else
//             ans[i] = s.top();

//         s.push(arr[i]);
//     }

//     for (int i = 0; i < n; i++)
//         cout << ans[i] << " ";

//     return 0;
// }

