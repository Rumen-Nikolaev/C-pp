#include <iostream>
using namespace std;

// Node structure for doubly linked list
struct Node {
    int data;       // Holds the value of the node
    Node* next;     // Pointer to the next node
    Node* prev;     // Pointer to the previous node
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node();  // Allocate memory for a new node
    newNode->data = value;       // Set the value
    newNode->next = nullptr;     // Next is null (end of the list)
    newNode->prev = nullptr;     // Previous is also null (start of the list)
    return newNode;
}

// Function to insert a node at the end of the doubly linked list
void insertNode(Node*& head, int value) {
    Node* newNode = createNode(value);  // Create a new node
    if (head == nullptr) {
        head = newNode;  // If the list is empty, the new node becomes the head
    } else {
        Node* temp = head;
        // Traverse to the last node
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;  // Link the last node to the new node
        newNode->prev = temp;  // Link the new node back to the last node
    }
}

// Function to print the list from head to tail (forward)
void printListForward(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";  // Print current node's data
        temp = temp->next;          // Move to the next node
    }
    cout << endl;
}

// Function to print the list from tail to head (backward)
void printListBackward(Node* tail) {
    Node* temp = tail;
    while (temp != nullptr) {
        cout << temp->data << " ";  // Print current node's data
        temp = temp->prev;          // Move to the previous node
    }
    cout << endl;
}

// Function to get the last node (tail) of the list
Node* getTail(Node* head) {
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;  // Traverse to the last node
    }
    return temp;  // Return the tail node
}

int main() {
    Node* head = nullptr;  // Initialize an empty doubly linked list

    // Insert values into the doubly linked list
    insertNode(head, 10);
    insertNode(head, 20);
    insertNode(head, 30);
    insertNode(head, 40);

    // Print the list forward
    cout << "Doubly Linked List (Forward): ";
    printListForward(head);  // Output: 10 20 30 40

    // Get the last node (tail) and print the list backward
    Node* tail = getTail(head);
    cout << "Doubly Linked List (Backward): ";
    printListBackward(tail);  // Output: 40 30 20 10

    return 0;
}
