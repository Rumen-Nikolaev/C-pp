#include <iostream>
#include <cmath>
using namespace std;

// Функция за пресмятане на sin(x) с факториел
double sinWithFactorial(double x) {
    double sum = x;  // Първи член
    double term = x;
    int n = 1;

    while (fabs(term) > 0.000001) {
        term *= -x * x / ((2 * n) * (2 * n + 1));  // Следващ член
        sum += term;
        n++;
    }

    return sum;
}

int main() {
    double degrees, radians;

    // Въвеждаме ъгъл в градуси
    cout << "Въведете ъгъл в градуси: ";
    cin >> degrees;

    // Преобразуване на градусите в радиани
    radians = degrees * M_PI / 180.0;

    // Изчисляваме sin(x) с факториел
    cout << "sin(" << degrees << " градуса) = " << sinWithFactorial(radians) << endl;

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

// Функция за пресмятане на sin(x) с факториел
double sinWithFactorial(double x) {
    double sum = x;  // Първи член
    double term = x;
    int n = 1;       // Степен на факториела
    double factorial = 1;  // Факториел

    while (fabs(term) > 0.000001) {
        factorial *= (2 * n) * (2 * n + 1);  // Пресмятане на факториела
        term *= -x * x / factorial;  // Следващ член от реда
        if (isinf(term)) {
            cout << "Препълване при член " << n << endl;
            break;
        }
        sum += term;  // Добавяме го към сумата
        n++;
    }

    return sum;
}

int main() {
    double degrees, radians;

    // Въвеждаме ъгъл в градуси
    cout << "Въведете ъгъл в градуси: ";
    cin >> degrees;

    // Преобразуване на градусите в радиани
    radians = degrees * M_PI / 180.0;

    // Изчисляваме sin(x) с факториел
    cout << "sin(" << degrees << " градуса) = " << sinWithFactorial(radians) << endl;

    return 0;
}




#include <iostream>
#include <cmath>
using namespace std;

double sinWithoutFactorial(double x) {
    double sum = x;
    double term = x;
    int n = 1;  // Започваме от първия член
    int count = 1;  // Брояч на итерациите, включваме първия член

    while (fabs(term) > 0.000001) {
        term *= -x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
        count++;  // Увеличаваме брояча при всяка итерация
    }

    cout << "Брой итерации: " << count << endl;  // Извеждаме броя на итерациите

    return sum;
}

int main() {
    double degrees, radians;

    cout << "Въведете ъгъл в градуси: ";
    cin >> degrees;

    // Преобразуване на градусите в радиани
    radians = degrees * M_PI / 180.0;

    // Изчисляване на sin(x) без факториел
    double result = sinWithoutFactorial(radians);
    
    cout << "sin(" << degrees << " градуса) = " << result << endl;

    return 0;
}


