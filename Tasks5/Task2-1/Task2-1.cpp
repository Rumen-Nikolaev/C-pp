#include <iostream>
using namespace std;

int gcd(int a, int b) {
  if (a == 0)
      return b;
  if (b == 0)
      return a; 
  if (a == b)
      return a;
  if (a > b)
  {
      return gcd(a-b), b);
  }
  else {
       return gcd(a, b-a);
  }
}

int main() {
  int x, y;

  cout << "Enter two integers: " << endl;
  cin >> x >> y;

  cout << gcd(x, y);

  return 0;
}







#include <iostream>
using namespace std;

int gcd(int x, int y) {
  if (y == 0)
  return x;
  return gcd(y, x % y);
}

int main() {
  int x, y;

  cout << "Enter two integers: << endl;
  cin >> x >> y;

  cout << gcd(x, y);

  return 0;
}
