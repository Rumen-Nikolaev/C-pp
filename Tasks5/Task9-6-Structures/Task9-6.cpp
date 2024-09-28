#include <iostream>
#include <string>
using namespace std;

// Дефиниция на структурата Book
struct Book {
    string title;
    string author;
    int year;
    float price;
};

// Функция за добавяне на книга
void addBook(Book books[], int &count) {
    cout << "Въведете заглавие: ";
    cin.ignore(); // Игнориране на предишния нов ред
    getline(cin, books[count].title);
    
    cout << "Въведете автор: ";
    getline(cin, books[count].author);
    
    cout << "Въведете година на издаване: ";
    cin >> books[count].year;
    
    cout << "Въведете цена: ";
    cin >> books[count].price;

    count++; // Увеличаване на броя на книгите
}

// Функция за извеждане на информация за книгите
void displayBooks(const Book books[], int count) {
    cout << "Информация за книгите:\n";
    for (int i = 0; i < count; i++) {
        cout << "Заглавие: " << books[i].title 
             << ", Автор: " << books[i].author 
             << ", Година: " << books[i].year 
             << ", Цена: " << books[i].price << " лв." << endl;
    }
}

int main() {
    const int MAX_BOOKS = 100; // Максимален брой книги
    Book books[MAX_BOOKS]; // Масив от книги
    int count = 0; // Брояч на книгите

    // Добавяне на книги
    for (int i = 0; i < 3; i++) { // Пример за добавяне на 3 книги
        cout << "Добавете информация за книга " << i + 1 << ":\n";
        addBook(books, count);
    }

    // Извеждане на информацията за книгите
    displayBooks(books, count);

    return 0;
}
