#include <iostream>

using namespace std;

int main() {
  int number;
  bool check_prime = true;
  int iteration_count = 0; // Counter variable to find iterations

  cout << "Please give a number-> ";
  cin >> number;

  if (number <= 1) {
    check_prime = false;
  }

  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      check_prime = false;
      iteration_count++; // Increment the counter variable
      break;
    }
    iteration_count++; // Increment the counter variable
  }

  if (check_prime) {
    cout << number << " is a prime number and factors are ->" << endl;
  } else {
    cout << number << " is a composite number and factors are -> ";

    for (int i = 1; i <= number; i++) {
      if (number % i == 0) {
        cout << i << ",";
      }
    }
    cout << endl;
  }

  cout << "Number of iterations: " << iteration_count << endl; // Display the iteration count

  return 0;
}
