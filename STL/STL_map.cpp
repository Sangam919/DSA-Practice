#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    m[1] = "One";
    m[2] = "Two";
    m[3] = "Three";

    for(auto it : m) {
        cout << it.first << endl;
    }
    m.insert({4, "Four"});
    m.insert({5, "Five"});
    for(auto it : m) {
        cout << it.first << " " << it.second << endl;
    }

    cout << "Elements in the map: " << endl;
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }

    cout << "Size of the map: " << m.size() << endl;

    m.erase(2);
    cout << "Elements after erasing key 2: " << endl;
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }

    cout << "Size of the map after erasing key 2: " << m.size() << endl;

    auto it = m.find(3);
    if (it != m.end()) {
        cout << "Key 3 found in the map with value: " << it->second << endl;
    } else {
        cout << "Key 3 not found in the map." << endl;
    }

    return 0;
}
