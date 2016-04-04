//Assignment #6
//Multiple functions

#include <iostream>
#include <string>
using namespace std;

//addition function
int add (int a, int b)
{
  return a+b;
}

//subtraction function
int sub (int a, int b)
{
  return a-b;
}

//factorial function
int factorial (int a)
{
  int ret=1;
  while (a>0)
  {
    return *=a;
    a=a-1;
  }
  return ret;
}

//main function
int main()
{
  int x=0;
  int y=0;
  cout << "Please input your chosen integer value for x: ";
  cin >> x;
  cout << "Please input your chosen integer value for y:";
  cin >> y;
  
  int operation=1;
  while (operation!=0)
  {
    cout << "Please choose one of the following: " << endl;
    cout << "> Option 1- Add y to x" << endl;
    cout << "> Option 2- Subtract y from x" << endl;
    cout << "> Option 3- Take the factorial of x" << endl;
    cout << "> Option 4- Take the factorial of y" << endl;
    cout << "> Option 0- Exit this program" << endl;
    cin >> operation;
    cout << "Option " << operation << " --> ";
    int output;
    if (operation==1)
    {
       cout << " Adding y to x will give you: ";
       output=add(x,y);
    }
    else if (operation==2)
    {
       cout << "Subtracting y from x will give you: ";
       output=sub(x,y);
    }
    else if (operation==3)
    {
       cout << " The factorial of x is: ";
       output=factorial(x);
    }
    else if (operation==4)
    {
       cout << " The factorial of y is: ";
       output=factorial(y);
    }
    else
    {
       break;
    }
    cout << output << endl;
    cout << "Choose again?" << endl;
  }
  return 0;
}
