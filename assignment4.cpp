#include <iostream>

using namespace std;



int main() {
  int number;

  cout << "Enter number to check for prime | Composite: ";
  cin >> number;

 if (number > 1) {
  
   for (int i = 2; i <= number / 2; i++) {
    if (number % i == 0) {
    cout<<number <<" Is composite number."<<endl;

    }
    
    else{
    	 cout<<number <<" Is prime number."<<endl;
	}
	
	  break;
  }
  }
  
  else{
    cout<<number <<" Is composite number."<<endl;
  }
  
  




  return 0;
}
