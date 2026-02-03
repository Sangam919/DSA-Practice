//     // count how many bracket you have to reverse to make given string valid 
//     // input = {{{}{}}{ output = 1
//     //     input = }{ output = 2
//     //         do with stack
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    if (n % 2 != 0) {
        cout << -1;
        return 0;
    }

    stack<char> st;

    for (char ch : s) {
        if (ch == '{') {
            st.push(ch);
        } else {
            if (!st.empty() && st.top() == '{') {
                st.pop();
            } else {
                st.push(ch);
            }
        }
    }

    int open = 0, close = 0;
    while (!st.empty()) {
        if (st.top() == '{') open++;
        else close++;
        st.pop();
    }

    int ans = (open + 1) / 2 + (close + 1) / 2;
    cout << ans;

    return 0;
}
