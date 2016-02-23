 //Assignment 4
 // Adding inputs using loops
 
 #include <iostream>
 using namespace std;
 
 int main ()
 {
   // variable declaration
   double x;
   double y;
   double z;
   int a;
   
   // iterative if-else control
   cout << "Hi, are you interested in participating? Input 1 for yes and 2 for no: << endl;
   cin >> a;
   if (a == 2)
   {
     cout << "Okay. Have a nice day." << endl;
   }
   else // a != 2
   {
   if (a == 1)
     {
       cout << "Thanks. Could you provide three numbers for me, please? Hit Enter after inputting each one." << endl;
       cin >> x;
       cin >> y;
       cin >> z;
       double S = X+y+z;
       cout << "The sum of your numbers is " << S << "." << endl;
       cout << "Elated that you participated. Enjoy the rest of your day!" << endl;
     }
     else // a != 1
     {
       cout << "CATASTROPHIC ERROR, Type 404:" << endl
       cout << "Invalid input (a != 1, a != 2) ... program shutdown imminent" << endl;
     }
    }
    return 0;
  }
