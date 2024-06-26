##include <iostream>

using namespace std;

char to_lower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int main() {
    cout << "Въведете изречение: ";
    char buffer[1000];
    cin.getline(buffer, 1000);

    int length = 0;
    while (buffer[length] != '\0') {
        length++;
    }

    char* processed = new char[length + 1];
    int j = 0;

    for (int i = 0; i < length; ++i) {
        char current = buffer[i];
        if (!(current == '.' || current == ',' || current == '!' || current == '?' || current == ';' || current == ':')) { 
            processed[j++] = to_lower(current);
        }
    }
    processed[j] = '\0';

    cout << "Обработено изречение: " << processed << endl;

    delete[] processed;

    return 0;
}
