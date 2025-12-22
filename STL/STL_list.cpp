#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;           // empty list

    list<int> n(5, 100);   // list of 5 elements, each = 100
    cout << "Printing n -> ";
    for (int i : n) {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(1);
    l.push_front(2);

    cout << "List l elements -> ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "After erase -> ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of list -> " << l.size() << endl;

    return 0;
}           
    