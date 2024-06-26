#include <iostream>
using namespace std;

class Fruit {
  string name;     //data of class Fruit
  int dniOtOtkusvane;
  double weight;
  bool bio;

 public:
    Fruit(string name, int dniOtOtkusvane, double weight, bool bio) {  //constructor
    this -> name = name;
    this -> dniOtOtkusvane = dniOtOtkusvane;
    this -> weight = weight;
    this -> bio = bio;
    }
  //setters
  void setName(string name) {
      this -> name = name;
  }
   void setDniOtOtkusvane(int dniOtOtkusvane) {
      this -> dniOtOtkusvane = dniOtOtkusvane;
  }
   void setWeight(double weight) {
      this -> weight = weight;
  }
   void setBio(bool bio) {
      this -> bio = bio;
  }
  
  //getters
  string getName() {
      return name;
  }
  int getDniOtOtkusvane() {
      return dniOtOtkusvane;
  }
  double getWeight() {
      return weight;
  }
  bool getBio() {
      return bio;
  }
  
  ~Fruit() {cout << "Destructor... " << endl;}
};

ostream& operator<<(ostream& c, Fruit fruit) {
    c << fruit.getName() << " " << fruit.getDniOtOtkusvane() << " dni " << fruit.getWeight() << " gr " <<  fruit.getBio() << endl;
    return c;
} 

int main() {
    Fruit fruit1("qbalka", 7, 300, 1);
    cout << fruit1;
    return 0;
} 
