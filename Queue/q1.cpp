#include<iostream>
#include<queue>
using namespace std;

class Myqueue{
    int arr[3];
    int front = -1;
    int rear = -1;
    public:
        void push(int data){
            if(rear == 3-1) return;
            if(front ==(-1)) front = rear=0;
            else rear = rear+1;
            arr[rear] = data;
        }
        void pop(){
            if(Front==(-1) || front == 3)
            {
                cout<<"queue is empty"; return;
            }
            front++;
        }
}

int main(){
    queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    cout<< q1.front()<<endl;
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
}
