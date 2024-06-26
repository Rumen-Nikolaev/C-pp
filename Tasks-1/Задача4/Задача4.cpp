#include <iostream>
#include <cstdlib> // За функции като rand() и srand()
#include <ctime>   // За функцията time()

using namespace std;

class Musaka {
private:
    int meatAmount; // Количество на месото в грамове
    bool hasCinnamon; // Дали има канела

public:
    // Конструктор с параметри
    Musaka(int meatAmount, bool hasCinnamon) : meatAmount(meatAmount), hasCinnamon(hasCinnamon) {}

    // Метод за "изяждане" на мусака
    void eat() const {
        cout << "Мусака с " << meatAmount << " грама месо";
        if (hasCinnamon) {
            cout << " и канела. Не мога да ям това!" << endl;
        } else {
            cout << ". Мммм..." << endl;
        }
    }
};

int main() {
    srand(static_cast<unsigned int>(time(0))); // Инициализиране на генератора на случайни числа

    Musaka* musakas[5]; // Масив от указатели към мусаки

    // Създаване на 5 мусаки с произволни данни
    for (int i = 0; i < 5; ++i) {
        int meatAmount = rand() % 1001; // Произволно количество месо между 0 и 1000 грама
        bool hasCinnamon = rand() % 2;  // Произволно дали има канела (0 или 1)
        musakas[i] = new Musaka(meatAmount, hasCinnamon);
    }

    // "Изяждане" на 5 мусаки
    for (int i = 0; i < 5; ++i) {
        musakas[i]->eat();
        delete musakas[i]; // Освобождаване на паметта
    }

    return 0;
}
