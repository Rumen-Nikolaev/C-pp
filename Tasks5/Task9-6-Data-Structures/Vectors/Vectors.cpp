#include <iostream>
#include <vector>

using namespace std;

int main () {
  vector<int> primes = {2, 3, 5, 7, 11};

  cout << primes[2];  // Outputs: 5

  primes.push_back(13);
  primes.push_back(17);
  primes.pop_back();

  for (int i = 0; i < primes.size(); i++) {
      cout << primes[i] << " ";
  }

  return 0;
}
