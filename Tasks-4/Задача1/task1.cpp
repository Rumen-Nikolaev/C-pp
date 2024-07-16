#include <iostream>
using namespace std;

int main() {
  int age_in_years;
  cout << "Въведете броя на навършените си години: ";
  cin >> age_in_years;
  int age_in_days = age_in_years * 365;
  cout << "Вие сте живели повече от " << age_in_days << " дни.\n";
  int age_in_hours = age_in_days * 24;
  int age_in_minutes = age_in_hours * 60;
  int age_in_seconds = age_in_minutes * 60;
  cout << "Вашата възраст в часове е приблизително = " << age_in_hours << endl;
  cout << "Вашата възраст в минути е приблизително = " << age_in_minutes << endl; 
  cout << "Вашата възраст в секунди е приблизително = " << age_in_seconds << endl;
  return 0;
}
