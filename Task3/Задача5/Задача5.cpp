#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    vector<int> sequence = {12, 3, 4, 8, 4, 8, 12, 6, 3, 6, 12, 8};
    unordered_map<int, int> countMap;

    // Итерираме през редицата и броим срещанията на всяко число
    for (int num : sequence) {
        countMap[num]++;
    }

    bool hasOddOccurrences = false;

    // Извеждаме числата с нечетен брой срещания и проверяваме делението на 3
    for (const auto& pair : countMap) {
        if (pair.second % 2 != 0) {
            hasOddOccurrences = true;
            if (pair.first % 3 == 0) {
                cout << pair.first << " се повтаря нечетен брой пъти и се дели на 3." << endl;
            } else {
                cout << pair.first << " се повтаря нечетен брой пъти, но не се дели на 3." << endl;
            }
        }
    }

    if (!hasOddOccurrences) {
        cout << "Няма числа, които се повтарят нечетен брой пъти." << endl;
    }

    return 0;
}
