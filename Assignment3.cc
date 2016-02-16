// Assignment #3
// Using new variable types

#include <iostream>
#include <string>
using namespace std;


int main ()
{
  // variable declaration and assignment
  string x;
  double y;
  double z;

  y = 3;
  z = 0.14;

  // greeting
  cout << "Hello! What is your first name?" << endl;
  cin >> x;
  cout << "Greetings, " << x << "..." << endl;

  // calculation and display
  cout << "I've just calculated that " << y << " + " << z << " = " << y+z << ", and that "  << y << " - " << z << " = " << y-z  << "!"  <<  endl;
}
