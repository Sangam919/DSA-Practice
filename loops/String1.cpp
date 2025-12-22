#include <iostream>
using namespace std;

char tolowercase(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        return ch + ('a' - 'A');
    }
    return ch;
}

bool checkPalindrome(char str[]){
    int start = 0;
    int end = 0;
    // Find the length of the string
    while(str[end] != '\0'){
        end++;
    }
    end--; // Set to last character index

    // Check for palindrome
    while(start < end){
        if(str[start] != str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void reverseString(char str[]){
    int start = 0;
    int end = 0;
    // Find the length of the string
    while(str[end] != '\0'){
        end++;
    }
    end--; // Set to last character index

    // Swap characters from start and end until they meet in the middle
    while(start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int getLength(char name[]){
    int length = 0;
    for(int i=0; name[i] != '\0'; i++){
        length++;
    }
    return length;
}

int main(){
    char name[20];
    cout << "Enter your name: ";
    cin.getline(name, 20);
    // cin >> name;
    cout<< "Your name is " << name << endl;
    cout << "Length of your name is " << getLength(name) << endl;
    reverseString(name);
    cout << "Reversed name is " << name << endl;

    if(checkPalindrome(name)){
        cout << "Your name is a palindrome" << endl;
    } else {
        cout << "Your name is not a palindrome" << endl;
    } 
    return 0;
}
