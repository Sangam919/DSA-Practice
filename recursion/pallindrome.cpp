#include<iostream>
using namespace std;
bool checkPallindrome(string s, int start, int end){
    // base case
    if(start >= end){
        return true;
    }
    if(s[start] != s[end]){
        return false;
    }
    // recursive case
    return checkPallindrome(s, start + 1, end - 1);
}
int main(){
    string name = "abba";
    cout<<endl;
    bool isPallindrome = checkPallindrome(name,0,name.length()-1);
    if(isPallindrome){
        cout<<"String is pallindrome"<<endl;
    }
    else{
        cout<<"String is not pallindrome"<<endl;
    }
    return 0;
}