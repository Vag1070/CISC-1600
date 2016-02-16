
// Name with calculation program


#include <iostream>

#include <string>


int main()

{


  int number1; // first integer to add
  int number2; // second integer to add
  int sum; // sum  of number1 and number2


std::cout << "Enter first integer: "; //  prompt user for data 
std::cin >> number1; // read first integer from user into number1

std::cout << "Enter second integer: "; // prompt user for data
std::cin >> number2; // read second integer from user into number2

sum = number1 + number2; // add the numbers; store result in sum
std::cout << "sum is " << sum  <<  std::endl;  // display sum; end line


}


