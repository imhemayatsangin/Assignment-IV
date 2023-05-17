#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int number;

  cout << "Please give a number -> ";
  cin >> number;

  // First Method
  bool check_prime = true;
  int iteration_count_1 = 0; // Counter variable for iterations

  if (number <= 1) {
    check_prime = false;
  }

  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      check_prime = false;
    }
    iteration_count_1++; // Increment the counter variable
  }

  cout << number << " is ";
  if (check_prime) {
    cout << "a prime number and factors are ->" << endl;
  } else {
    cout << "a composite number and factors are -> ";

    for (int i = 1; i <= number; i++) {
      if (number % i == 0) {
        cout << i << ",";
      }
    }
    cout << endl;
  }

  cout << "With 1st method, the number of iterations is: " << iteration_count_1 << endl;

  // Second Method
  check_prime = true;
  int iteration_count_2 = 0; // Counter variable for iterations

  if (number <= 1) {
    check_prime = false;
  }

  int upper_limit = sqrt(number); // Calculate the upper limit

  for (int i = 2; i <= upper_limit; i++) {
    if (number % i == 0) {
      check_prime = false;
      iteration_count_2++; // Increment the counter variable
      break; // No need to continue checking further
    }
    iteration_count_2++; // Increment the counter variable
  }
  
  if (!check_prime)
    iteration_count_2++; // Increment iteration count for composite numbers

  cout << "With 2nd method, the number of iterations is: " << iteration_count_2 << endl;

  return 0;
}
