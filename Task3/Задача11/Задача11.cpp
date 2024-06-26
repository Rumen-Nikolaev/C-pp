#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    // Конструктор
    Employee(const string& empName, double empSalary) {
        name = empName;
        salary = empSalary;
    }

    // Getter метод за името
    string getName() const {
        return name;
    }

    // Setter метод за името
    void setName(const string& empName) {
        name = empName;
    }

    // Getter метод за заплатата
    double getSalary() const {
        return salary;
    }

    // Setter метод за заплатата
    void setSalary(double empSalary) {
        salary = empSalary;
    }

    // Метод say_something
    void say_something(const string& message) {
        cout << name << ": " << message << endl;
    }
};

int main() {
    // Създаване на обект от класа Employee
    Employee ivan("Ivan", 5000);

    // Използване на getter методи
    cout << "Име: " << ivan.getName() << endl;
    cout << "Заплата: " << ivan.getSalary() << endl;

    // Използване на setter методи
    ivan.setName("Peter");
    ivan.setSalary(6000);

    cout << "Променено име: " << ivan.getName() << endl;
    cout << "Променена заплата: " << ivan.getSalary() << endl;

    // Използване на метода say_something
    ivan.say_something("Hi there!");

    return 0;
}
