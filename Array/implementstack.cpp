#include <iostream>
#include <queue>
#include <string>
using namespace std;

class MyStack {
public:
    queue<int> q1;
    queue<int> q2;

    MyStack() {
        // Initializing two empty queues
        q1 = queue<int>();
        q2 = queue<int>();
    }
    
    void push(int x) {
        // Push the new element into q2
        q2.push(x);
        // Move all elements from q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        // Swap the names of q1 and q2
        swap(q1, q2);
    }
    
    int pop() {
        // Retrieve the top element (front of q1)
        int val = q1.front();
        // Remove the top element
        q1.pop();
        return val;
    }
    
    int top() {
        // Return the top element (front of q1) without removing it
        return q1.front();
    }
    
    bool empty() {
        // Check if q1 is empty
        return q1.empty();
    }
};

// Function to read and process user inputs
void processInput() {
    MyStack stack;
    string command;
    
    while (true) {
        cout << "Enter command (push x, pop, top, empty, exit): ";
        cin >> command;

        if (command == "push") {
            int x;
            cin >> x;
            stack.push(x);
            cout << "Pushed " << x << " into the stack." << endl;
        } else if (command == "pop") {
            if (!stack.empty()) {
                int val = stack.pop();
                cout << "Popped " << val << " from the stack." << endl;
            } else {
                cout << "Stack is empty, cannot pop." << endl;
            }
        } else if (command == "top") {
            if (!stack.empty()) {
                int val = stack.top();
                cout << "Top element is " << val << "." << endl;
            } else {
                cout << "Stack is empty." << endl;
            }
        } else if (command == "empty") {
            if (stack.empty()) {
                cout << "Stack is empty." << endl;
            } else {
                cout << "Stack is not empty." << endl;
            }
        } else if (command == "exit") {
            break;
        } else {
            cout << "Invalid command. Please try again." << endl;
        }
    }
}

int main() {
    // Run the input processing function
    processInput();
    return 0;
}
