#include <iostream>
#include <iomanip> // За std::setprecision

using namespace std;

int main() {
    double pi = 0.0;
    double numerator = 1.0;
    int sign = 1;

    for (int i = 0; i < 10000; ++i) {
        pi += (numerator / (2 * i + 1)) * sign;
        sign *= -1;

        // Добавяме условие за разпечатка на всеки 100 итерации
        if ((i + 1) % 100 == 0) {
            cout << "Iteration " << i + 1 << ": π ≈ " << fixed << setprecision(15) << pi * 4 << endl;
        }
    }

    pi *= 4; // Завършване на формулата за π
    cout << fixed << setprecision(15) << "Final π ≈ " << pi << endl;

    return 0;
}

#include <iostream>
#include <iomanip> // За std::setprecision

using namespace std;

int main() {
    double pi = 0.0;
    double numerator = 1.0;
    int sign = 1;
    int i = 0;

    loop_start:
    if (i >= 10000) goto end_loop;
    
    pi += (numerator / (2 * i + 1)) * sign;
    sign *= -1;
    
    // Добавяме условие за разпечатка на всеки 100 итерации
    if ((i + 1) % 100 == 0) {
        cout << "Iteration " << i + 1 << ": π ≈ " << fixed << setprecision(15) << pi * 4 << endl;
    }

    ++i;
    goto loop_start;

    end_loop:
    pi *= 4; // Завършване на формулата за π
    cout << fixed << setprecision(15) << "Final π ≈ " << pi << endl;

    return 0;
}


#include <iostream>
#include <iomanip> // За std::setprecision

using namespace std;

int main() {
    double pi = 0.0;
    double numerator = 1.0;
    int sign = 1;

    for (int i = 0; i < 10000; ++i) {
        pi += (numerator / (2 * i + 1)) * sign;
        sign *= -1;
    }

    pi *= 4; // Завършване на формулата за π
    cout << fixed << setprecision(15) << "π ≈ " << pi << endl;

    return 0;
} 

#include <iostream>
#include <iomanip> // За std::setprecision

using namespace std;

int main() {
    double pi = 0.0;
    double numerator = 1.0;
    int sign = 1;
    int i = 0;

    loop_start:
    if (i >= 10000) goto end_loop;
    
    pi += (numerator / (2 * i + 1)) * sign;
    sign *= -1;
    ++i;
    goto loop_start;

    end_loop:
    pi *= 4; // Завършване на формулата за π
    cout << fixed << setprecision(15) << "π ≈ " << pi << endl;

    return 0;
}


