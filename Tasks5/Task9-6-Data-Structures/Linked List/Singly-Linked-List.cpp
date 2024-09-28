#include <iostream>
using namespace std;

// Node Structure for the linked list
struct Node {
    int data; // Stores the value of the node 
    Node* next; // Pointer to the next node in the list
};

// Function to create a new node with a given value
Node* createNode(int value) {
    Node* newNode = new Node(); // Allocate memory for a new node 
    newNode->data = value;   // Assign the value to the data field 
    newNode->next = nullptr; // The new node's next pointer points to nullptr (end of list)
    return newNode;          // Return the new node
}

// Function to insert a node at the end of the linked list
void insertNode(Node*& head, int value) {
    Node* newNode = createNode(value); // Create a new node with the given value
    if (head == nullptr) {   // If the list is empty (head is null)
        head = newNode;      // The new node becomes the head (first node in the list)
    } else {
        Node* temp = head;   // Temporary pointer to traverse the list
        while (temp->next != nullptr) { // Traverse the list untill the last node
            temp = temp->next;   // Move to the next node
    }
    temp->next = newNode;      // Link the last node to the new node
}


// Function to print all the nodes in the linked list
void printList(Node* head) {
    Node* temp = head; // Temporary pointer to traverse the list 
    while (temp != nullptr)  { // Continue until the end of the list (nullptr)
        cout << temp->data << " ";   // Print the data of the current node 
        temp = temp->next;         // Move to the next node
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;   // Initialize an empty linked list (head is null)
    
    // Insert values into the linked list 
    insertNode(head, 10);  // Inser node with value 10
    insertNode(head, 20);  // Inser node with value 20
    insertNode(head, 30);  // Inser node with value 30
    insertNode(head, 40);  // Inser node with value 40
    
    // Print the linked list 
    cout << "Linked List: ";
    printList(head);   // This will output 10 20 30 40

    return 0;
}
