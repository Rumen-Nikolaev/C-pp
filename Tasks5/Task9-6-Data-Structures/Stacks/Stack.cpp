#include <iostream>  
#include <stack>    
using namespace std;

int main() {
    // Declare a stack that holds integers
    stack<int> stack;

    // Push elements onto the stack (add to the top)
    stack.push(21);  // Stack now: [21]
    stack.push(22);  // Stack now: [21, 22]
    stack.push(24);  // Stack now: [21, 22, 24]
    stack.push(25);  // Stack now: [21, 22, 24, 25]

    // Declare a variable num and push its value (0) onto the stack
    int num = 0;     
    stack.push(num); // Stack now: [21, 22, 24, 25, 0]

    // Pop (remove) elements from the top of the stack
    stack.pop();     // Removes 0; Stack now: [21, 22, 24, 25]
    stack.pop();     // Removes 25; Stack now: [21, 22, 24]
    stack.pop();     // Removes 24; Stack now: [21, 22]

    // While the stack is not empty, print the top element and pop it
    while (!stack.empty()) {
        cout << stack.top() << " "; // Print the top element (first 22, then 21)
        stack.pop();                // Remove the top element after printing
    }
    // After the loop, the stack will be empty

    return 0;  // End of program
}


