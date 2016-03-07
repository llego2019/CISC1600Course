//Assignment #5
//More advanced use of loops

#include <iostream>
using namespace std;

int main ()
{
  //introducing variables
  int x;
  int y;
  
  //greeting
  cout << "I'm thinking of an integer between 0 and 11, inclusive..." << endl;
  cout << "I know, let's play a game: guess which of those dozen I have in mind!" << endl;
  
  //control flow
  for (x=3, y=0; y!=x)
  {
    cin >> y;
    if (y==3)
    {
      cout << "Congrats, you've won." << endl;
    }
    else if (y>3)
    {
      cout << "Too high; try a smaller number." << endl;
    }
    else
    {
      cout << "Too low; try a larger number." << endl;
    }
  }
  return 0;
}
    
