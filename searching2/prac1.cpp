// maxlen = max(end-start+ 1) is use for slidng window approach
// length of longest substring with non repeating __cpp_unicode_characters
// input  = abcadbcdef output  = 5
// #include<iostream>
// using namespace std;
// int main(){
//     string s = "abcadbcdef";
//     int maxLength = 0;
//     for(int i=0; i<s.length(); i++){
//         int freq[256] = {0};
//         for(int j=i; j<s.length(); j++){
//             freq[s[j]]++;                                   
//             if(freq[s[j]] > 1){
//                 break;
//             }
//             maxLength = max(maxLength, j - i + 1);
//         }
//     }
//     cout << "output is: " << maxLength << endl;
//     return 0;
// }






// prefix sum 
// input - 1 2 3 4 5
// output - 1 3 6 10 15


#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int ps[5];
    ps[0] = arr[0];
    for(int i=1;i<5;i++){
        ps[i] = ps[i-1] + arr[i];
    }
    for(int i=0;i<5;i++){
        cout<< ps[i] << " ";
    }
}
