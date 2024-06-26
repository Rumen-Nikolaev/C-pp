#include <iostream>	
#include <cstring>	

using namespace std;


int main() {

    char text[500];
    cout << "Enter text: (end with \'*\')" << endl;
    cin.getline(text, 500, '*');

    int ctr = 0;
    int write = 0;
    while (text[ctr] != '\0') {
        if (text[ctr] == 'b'
            && text[ctr + 1] == 'r'
            && text[ctr + 2] == 'a'
            && text[ctr + 3] == 't') {
            if (text[ctr + 4] == ' ' || text[ctr + 4] == '\n') ctr++;
            ctr += 4;
        }
        else {
            text[write] = text[ctr];
            write++;
        ctr++;
        }
    }
    text[write] = '\0';

    cout << text;

    return 0;
}
