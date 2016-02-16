





// Name,age and favorite thing program


#include <iostream>

#include <string>

using namespace std;


int main ()

{

  string username;
  cout  << "Input your name: ";
  cin >> username;

  string age;
  cout  << "Enter your age: ";
  cin >> age;
  
  string favorite;
  cout << "What is your favorite thing: ";
  cin >> favorite;
     
  cout << "Hello, my name is " <<username  << endl
       << "I am " <<age << " years old " << "and my favorite thing is " <<favorite <<endl;

  return 0;
}
