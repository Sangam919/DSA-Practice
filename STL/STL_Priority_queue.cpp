#include <iostream>
#include <queue>
using namespace std;

int main() {
    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "Top Element -> " << maxi.top() << endl;

    maxi.pop();
    cout << "Top Element after pop -> " << maxi.top() << endl;

    cout << "Size of priority queue -> " << maxi.size() << endl;
    cout << "Empty or not -> " << maxi.empty() << endl;

    cout << "------------------" << endl;
    cout<<endl;

    
    mini.push(1);
    mini.push(3);   
    mini.push(2);
    mini.push(0);

    cout << "Top Element -> " << mini.top() << endl;

    mini.pop();
    cout << "Top Element after pop -> " << mini.top() << endl;

    cout << "Size of priority queue -> " << mini.size() << endl;
    cout << "Empty or not -> " << mini.empty() << endl;

    return 0;
}
