#include<iostream>
using namespace std;

void reverse(string &s, int start, int end){
    // base case
    if(start >= end){
        return;
    }
    // swap characters
    swap(s[start], s[end]);
    start++;
    end--;
    // recursive call
    reverse(s, start, end);
}

int main(){
    string name = "Sangam";
    cout<<endl;
    reverse(name,0,name.length()-1);
    cout<<endl;
    cout<<"Reversed string is: "<<name<<endl;
    return 0;
}