#include <iostream>
using namespace std;


int main() {
  int i = 1;
  
  start:
  
  if (i < 0) {
      cout << "Олеле, препълних!" << endl;
      cout << "Стойнст на i: " << i << endl;
      goto end;
  }
  
  i++;
  
  goto start;
  
  end;

  return 0;
}
