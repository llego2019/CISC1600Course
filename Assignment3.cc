// Assignment #3
// Using new variable types

#include <iostream>
#include <string>
using namespace std;


int main ()
{
  // variable declaration and assignment
  string x;
  int  y;
  double z;

  // greeting
  cout << "Hello! What is your first name?" << endl;
  cin >> x;
  cout << "Greetings, " << x << "..." << endl;
  cout << "Please input an integer." << endl;
  cin >> y;
  cout << "Please input a decimal number. " << endl;
  cin >> z;

  // calculation and display
  cout << "I've made the following calculations:  " << y << " + " << z << " = " << y+z << ", and "  << y << " - " << z << " = " << y-z  << "."  <<  endl;
}
