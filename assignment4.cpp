#include <iostream>

using namespace std;



int main() {
  int number;

 bool check_prime = true;

  cout << "Enter number to check for prime | Composite: ";
  cin >> number;


  if (number <= 1) {
    check_prime = false;
  }

  for (int i = 2; i <= number / 2; i++) {
    if (number % i == 0) {
      check_prime = false;
      break;
    }
  }

  if (check_prime) {
    cout << number << " is a prime number." << endl;
  } else {
    cout << number << " is a composite number." << endl;
  }


  return 0;
}
