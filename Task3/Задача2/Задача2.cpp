#include <iostream>

using namespace std;

int main() {
    string time1, time2;
    cout << "Enter the first time (in military format): ";
    cin >> time1;
    cout << "Enter the second time (in military format): ";
    cin >> time2;

    int hours1 = stoi(time1.substr(0, 2));
    int minutes1 = stoi(time1.substr(2, 2));

    int hours2 = stoi(time2.substr(0, 2));
    int minutes2 = stoi(time2.substr(2, 2));

    int totalMinutes1 = hours1 * 60 + minutes1;
    int totalMinutes2 = hours2 * 60 + minutes2;

    int diffMinutes = totalMinutes2 - totalMinutes1;

    int hoursDiff = diffMinutes / 60;
    int minutesDiff = diffMinutes % 60;

    cout << hoursDiff << " hours " << minutesDiff << " minutes" << endl;

    return 0;
}
