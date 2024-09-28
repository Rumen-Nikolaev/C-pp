#include <iostream>  
#include <queue>    
using namespace std;

int main() {
    // Declare a queue that holds integers
    queue<int> myQueue;
    
    // Enqueue (add) elements to the queue 
    myQueue.push(10); // Queue now: [10]
    myQueue.push(10); // Queue now: [20]
    myQueue.push(10); // Queue now: [30]
    
    // Print the element at the front of the queue 
    cout << "Front element: " << myQueue.front() << endl; // Output: 10 
    
    // Print the element at the back of the queue 
    cout << "Back element: " << myQueue.back() << endl; // Output: 30 
    
    
    // Dequeue (remove) the front element from the queue 
    myQueue.pop();   // Queue now: [20, 30]
    
    // Print the front element again after popping 
    cout << "Front element after pop: " << myQueue.front() << endl; // Output: 20
    
    // Check if the queue is empty
    if (!myQueue.empty()) {
        cout << "The queue is not empty." << endl;
    } else {
        cout << "The queue is empty." << endl;
    }
    
    // Print and remove all elements in the queue 
    cout << "Remaining elements in queue: ";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";   // Print the front element 
        myQueue.pop();                   // Remove the front element 
    }
    cout << endl;

    return 0;  
}
