#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

class Stack {
    Node* tophead;

public:
    Stack() {
        tophead = NULL;
    }

    // Push element into stack
    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = tophead;
        tophead = newNode;
    }

    // Pop element from stack
    int pop() {
        if (tophead == NULL) {
            cout << "Stack Underflow\n";
            return -1;
        }
        int poppedValue = tophead->data;
        Node* temp = tophead;
        tophead = tophead->next;
        delete temp;
        return poppedValue;
    }

    // Get top element
    int top() {
        if (tophead == NULL) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return tophead->data;
    }

    // Display stack
    void display() {
        Node* temp = tophead;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.display();      // 30 20 10
    cout << s.top() << endl;   // 30
    cout << s.pop() << endl;   // 30
    s.display();      // 20 10

    return 0;
}
