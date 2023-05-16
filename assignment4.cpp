#include <iostream>

using namespace std;

int main() {
  int number;
  bool check_prime = true;

  cout << "Please give a number-> ";
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
    cout << number << " is a prime number and factors are ->" << endl;
  } else {
    cout << number << " is composite number and factors are -> ";

    for (int i = 1; i <= number; i++) {
      if (number % i == 0) {
        cout << i << ",";
      }
    }
    cout << endl;
  }

  return 0;
}
