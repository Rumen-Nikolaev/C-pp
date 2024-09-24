
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double sinWithoutFactorial(double x) {
    double sum = 0.0;
    double term = x; 
    int n = 1;
    int counter = 1;

    while (fabs(term) > 0.000001) {
        sum += term;
        n += 2;
        term = -term * x * x / (n * (n - 1));
        counter++;
    }

    cout << "Number of iterations: " << counter << endl;
    return sum;
}

int main() {
    double degrees, radians;

    cout << "Enter angle in degrees: ";
    cin >> degrees;

    radians = degrees * M_PI / 180.0;

    cout << "sin(" << degrees << " degrees) = " << fixed << setprecision(15) << sinWithoutFactorial(radians) << endl;

    return 0;
}


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double sinWithFactorial(double x) {
    double sum = 0.0;
    double term = x;
    int n = 1;
    double factorial = 1;
    int counter = 0;

    while (fabs(term) > 0.000001) {
        sum += term;
        counter++;
        n += 2;
        factorial *= n * (n - 1);
        term = -term * x * x / factorial;
    }

    cout << "Number of iterations: " << counter << endl;
    return sum;
}

int main() {
    double degrees, radians;

    cout << "Enter angle in degrees: ";
    cin >> degrees;

    radians = degrees * M_PI / 180.0;

    cout << "sin(" << degrees << " degrees) = " << fixed << setprecision(15) << sinWithFactorial(radians) << endl;

    return 0;
}














#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Функция за пресмятане на sin(x) с факториел
double sinWithFactorial(double x) {
    double sum = 0.0;      // Сумата на реда
    double term = x;       // Първи член (x)
    int n = 1;             // Степен на числото в реда
    int sign = 1;          // За редуване на знаците
    double factorial = 1;  // Факториел за знаменателя

    while (fabs(term) > 0.000001) {
        sum += term;       // Добавяме термина към сумата
        n += 2;            // Увеличаваме n с 2 за следващия член на реда

        // Пресмятаме нов факториел (2n)*(2n-1) и терма за следващия член
        factorial *= n * (n - 1);
        term = -term * x * x / factorial;  // Редуваме знака и изчисляваме терма
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
    cout << "sin(" << degrees << " градуса) = " << fixed << setprecision(15) << sinWithFactorial(radians) << endl;

    return 0;
}



#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Функция за пресмятане на sin(x) без факториел
double sinWithoutFactorial(double x) {
    double sum = 0.0;
    double term = x; // Първият член е x
    int n = 1;
    int counter = 0;

    // Цикъл, докато точността е по-голяма от 0.000001
    while (fabs(term) >= 0.000001) {
        sum += term;
        counter++;         // Увеличаваме брояча
        n += 2;

        // Пресмятаме следващия член, без да използваме факториел
        term = -term * x * x / (n * (n - 1));
    }

    cout << "Броят на итерации: " << counter << endl;
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


