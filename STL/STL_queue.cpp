#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front Element -> " << q.front() << endl;

    q.pop();
    cout << "Front Element after pop -> " << q.front() << endl;

    cout << "Size of queue -> " << q.size() << endl;
    cout << "Empty or not -> " << q.empty() << endl;

    return 0;
}
