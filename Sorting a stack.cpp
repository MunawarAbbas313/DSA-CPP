#include<iostream>
#include<stack>
using namespace std;

// Function to insert an element in a sorted manner
void Sort(stack<int> &s, int num) {
    if (s.empty() || (!s.empty() && s.top() < num)) {
        s.push(num);
        return;
    }

    // Store the top element and pop it
    int store = s.top();
    s.pop();

    // Recursive call
    Sort(s, num);

    // Push the stored element back onto the stack
    s.push(store);
}

// Function to sort the stack
void sortStack(stack<int> &s) {
    if (s.empty()) {
        return;
    }

    // Store the top element
    int number = s.top();
    s.pop();

    // Recursive call to sort the remaining stack
    sortStack(s);

    // Insert the stored element in the sorted order
    Sort(s, number);
}

int main() {
    stack<int> s;
    s.push(-1);
    s.push(2);
    s.push(8);
    s.push(1);
    s.push(0);

    // Print the unsorted stack
    cout << "\nUnsorted Stack: " << endl;
    stack<int> p = s; // Copy the stack for printing
    while (!p.empty()) {
        cout << " " << p.top() << " ";
        p.pop();
    }

    // Sort the stack
    sortStack(s);

    // Print the sorted stack
    cout << "\nSorted Stack: " << endl;
    while (!s.empty()) {
        cout << " " << s.top() << " ";
        s.pop();
    }

    return 0;
}
