#include <iostream>
#include <conio.h>
#include <algorithm>
#include <iomanip>
#include <cmath>

// David Hao TER Set 5
using namespace std; 

int getInt(int A, int B) //Takes two integers as a range, verifies input as being in range.

{
    int num1;
    
    cout << "Enter an integer within " << A << " and " << B << ": "; // prompt based on conditions
    // Prompt
    cin >> num1;
    
    if (A > B) // check conditions
    
    {
    while (num1 < B || num1 > A) // error trap
    {cout << "The number entered is out of the specified range. Try again: ";
    cin >> num1;
    }
}
    else if (A < B) // check conditions 
    {
    while (num1 > B || num1 < A)
    {cout << "The number entered is out of the specified range. Try again: ";
    cin >> num1;
    }
}
     else if (A == B) // error trap
     { while (num1 != A)
     { cout << "The number entered is out of the specified range. Try again: ";
     cin >> num1;
     }
     }

    return num1; // returns verified number
}

     
int sumLimit(int C) //Takes a number, sums from 1 to that number. 

{

int total = C; // C has been read in, the initial total is C. 

for (int x = 1; x < C; x++) // loop to add to total until c. 
{
    total = total + x;
}

return total; // returns total. 
}

void sumLimit() // pre-program for sumLimit
{
     system("CLS");
     int a = getInt(1, 65535); // maximum range before overflow
     cout << "The sum is " << sumLimit (a) << "."; //output
     getch();
}
         

double Factorial(double D) // factorials a user-inputted number
{{
double total = D; // same concept as sumlimit, but with multiplication.

for (int x = 1; x < D; x++)
{
    total = total* x;
}

return total; // returns final amount
}

}

void Factorial () //pre-program for Factorial

{
     system("CLS");
double D = getInt(1, 170); // maximum range before overflow
cout << "The factorial of " << D << " is " << Factorial(D) << "."; // output
getch();
}

bool Quadratic (double a, double b, double c, double &x1, double &x2) // solves for quadratic roots. reads in A,B,C, references x1 and x2
{ 
     
   if ((b*b - 4*a*c) < 0) // if discriminant is less than zero, default roots to zero and end.
   {
            x1 = 0;
            x2 = 0;
   return false; 
}

else // quadratic formula, bool = true
{         
  x1 = (-b + sqrt(b*b - 4*a*c))/(2*a); 
  x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
return true;
}  
}

void Quadratic() // pre-program for quadratic

{
     double a, b, c; //
     double x1 = 0;
     double x2 = 0;
     system ("CLS");

cout << "Ax^2 + Bx + C = 0 " << endl;
cout << endl << "Input values for A, B and C, pressing <Enter> after each." << endl;
cin >> a >> b >> c; // read in A, B, C

bool hallo = Quadratic (a,b,c,x1,x2);

cout << fixed << setprecision(3);  // set decimal precision
if (hallo == true) // if roots exist, run.
{
if (x1 == x2) // if only one root
{
cout << "There is only one root: X = " << x1<< endl;
}
else { // output roots
cout << "The first root is X = " << x1 << "." << endl;
cout << "The second root is X = " << x2 << "." << endl;
}

}

if (hallo == false) // if no roots
{cout << "This equation has no real roots." << endl;}


getch();

}

// Main program

int main()

{
    char choice;
    do
    {
    
       
    system("CLS"); 
         
    // Display options
    cout << "David Hao 12 Robotics Set 5" <<endl;
    cout << "-----------------------------------" << endl;
    cout << "Select a program number and press enter."<<endl <<endl;
    cout << "1 - sumLimit" <<endl;
    cout << "2 - Factorial" <<endl;
    cout << "3 - Quadratic" << endl;
    
    cout <<endl << "Press 0 to quit the program."<<endl<<endl; 
    
    cin >> choice;
    // If/Else for options.
    
    if (choice == '1')
     {sumLimit();}
    
    else if (choice == '2')
    {Factorial();}
    
    else if (choice == '3')
    {Quadratic();}
}

//Keeps program looping back to menu unless user exits. 
while (choice != '0'); 
    
}
               


