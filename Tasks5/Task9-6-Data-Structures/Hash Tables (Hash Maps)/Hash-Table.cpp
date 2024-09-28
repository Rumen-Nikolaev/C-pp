#include <iostream>
#include <unordered_map>  // Required for using unordered_map (hash table)
using namespace std;

int main() {
    // Declare an unordered_map (hash table) that maps string keys to integer values
    unordered_map<string, int> myMap;
    
    // Insert key-value pairs into the hash table 
    myMap["apple"] = 50; 
    myMap["banana"] = 30;
    myMap["orange"] = 20;
    
    // Access a value using a key 
    cout << "Price of apple: " << myMap["apple"] << endl; // Output: 50 
    
    // Modify the value associated with a key 
    myMap["banana"] = 40;  // Change "banana" price to 40 
    
    // Check if a key exists in the hash table 
    if (myMap.find("grape") != myMap.end()) {
        cout << "Grape is found in the map." << endl;
    } else {
        cout << "Grape is not found in the map." << endl; // Output: Grape is not found in the map.
    }
    
    // Iterate over the hash table and print all key-value pairs
    cout << "Items in the hash table: " << endl;
    for(auto& pair : myMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }
    
    // Remove an element by key
    myMap("orange"); // Removes "orange" from the map 
    
    // Check if "orange" was removed 
    if (myMap.find("orange") == myMap.end()) {
        cout << "Orange has been removed from the map. " << endl; // Output: Orange has been removed from the map.
    }
    

    return 0;
}
