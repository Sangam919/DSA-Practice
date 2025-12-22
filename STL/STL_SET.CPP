#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(5);
    s.insert(2);
    s.insert(8);
    s.insert(1);
    s.insert(3);

    cout << "Elements in the set: ";
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Size of the set: " << s.size() << endl;

    s.erase(2);
    cout << "Elements after erasing 2: ";
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Size of the set after erasing 2: " << s.size() << endl;
    
    set<int>::iterator it = s.find(3);
    cout<<"value present at it-> "<<*it<<endl;
    if (it != s.end()) {
        cout << "Element 3 found in the set." << endl;
    } else {
        cout << "Element 3 not found in the set." << endl;
    }


    return 0;
}
