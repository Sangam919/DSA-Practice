// // red black tree for ordered map
// // unordered map hash table
// // diff between find and count
// // #include<iostream>
// // #include<unordered_map>
// // using namespace std;
// // int main(){
// //     unordered_map<string,int> map;
// //     // map<string,int> map;
// //     map["raj"] = 20;
// //     map["ram"] = 30;
// //     map["monu"] = 30;
// //     map["ramu"] = 50;

// //     if(map.find("ram") != map.end()){
// //         cout <<"key is found" <<endl;
// //     }
// //     if(map.count("ram")){
// //         cout <<"key is found again" <<endl;
// //     }
// //     for(auto it : map){
// //         cout << it.first << " " << it.second<<endl;
// //     }

// // }


// // you have to find frequency of every character in a string
// // input = abacbadc
// // output = a =3 ,b =2, c = 2 ,d = 1 

// // #include<iostream>
// // #include<unordered_map>
// // using namespace std;
// // int main(){
// //     string s = "abacbadc";
// //     unordered_map<char,int> freqMap;
// //     for(int i=0; i<s.length(); i++){
// //         freqMap[s[i]]++;
// //     }
// //     for(auto it : freqMap){
// //         cout << it.first << " = " << it.second << endl;
// //     }
// // }

// #include<iostream>
// #include<unordered_map>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "abcabdba";
//     int n=s.length();
//     unordered_map<char,int> map;

//     for(int i =0;i<n;i++){
//         map[s[i]]++;
//     }
//     for(auto it: map){
//         cout << it.first << " : " << it.second << endl;
//         return 0;
//     }
// }




