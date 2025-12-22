#include<iostream>
using namespace std;

void reachHome(int source,int destination){
    //base case
    if(source==destination){
        cout<<"Reached Home"<<endl;
        return;
    }
    //processing ek step aage badho
    source++;
    
    //recursive call
    reachHome(source,destination);
}

int main(){
    int destination = 10;
    
    int source = 1;
    

    cout<< endl;
    reachHome(source, destination);
    return 0;

}