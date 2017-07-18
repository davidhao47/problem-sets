#include <iostream>
#include <conio.h>
#include <algorithm>
#include <iomanip>
#include <cmath>

// David Hao TER Set 2 Looping
using namespace std; 

// Input a number, console shows the squares from 1 to that number in columns.

int NumberSquare()
{
    system("CLS");
    int num1;
    
    cout << "Input a number and press enter. \n";
    cin >> num1;
     
     // Number prompt 
     
    cout << "Number Square" << endl;
    cout <<"---------------------------" << endl;
    
     
    for (int count = 1; count <= num1; count++)
    
    // Looping, incrementing by one each time and squaring that number and displaying. 
    {
     cout <<" " <<count; 
     
     for (int a = 0; a < 7-(int)log10(count)-(int)log10(count*count);a++)
     {cout <<" ";}
     
     cout <<count*count<<endl;
        
        }
getch();

return 0;   
        }
        

int Product()
// Takes a user-specified number of non-negative numbers and multiplies them. 
{    
system ("CLS"); 
int amount;

cout << "How many numbers to process?" << endl;
cin >> amount;

// Prompt for amount 

cout <<endl<< "Input " <<amount<<" positive integers. "<<endl;

int total =1;

for (int x = 1; x <= amount; x++)
{
    // Displaying numbers
    
    int multiply = 1;
    cout << "#"<<x<<" ";
    cin>>multiply;
    cout<<endl;
    
    // error trap/message for invalid numbers.
    if(multiply <=0)
    {cout << multiply << " not counted."<<endl;}
    else {total = total*multiply;}    
}
cout << "The product of the positives is " << total;

// final product

    getch();
    return 0;    
}

int Factorial()

// A factorial function, up to 12. 

{
    
system("CLS");    
int num;

cout << "Input a non-negative number." <<endl;
cin >> num;

// Error trap/message for invalid numbers. 
while (num <=0 || num >= 13)
{
      cout << "This number is not valid. Try again." << endl;
      cin >> num;
}

long total = 1;

for (long x = num; x >= 2; x--)
{
    //Factorial by looping, multiplying a total with the loop number each time. 
    total = total*x;  
    cout << x <<" x ";
}

cout << "1 = " << total <<endl;

// Outputing the default " *1 = " each time, and final result.

    getch();
    return 0;

}

int Invest()

// Takes three inputs: Monthly deposit, annual interest rate, terms. 
// Calculates rates and new sums, monthly, displays results in columns.
{
 system("CLS");
 double deposit, annual;
 int term;
 
 cout <<"Monthly Deposit          : ";
 cin >> deposit;
 
 // Prompt and error trap
 
 while (deposit <=0)
 {
 cout << "Invalid amount: Try again. ";
 cin >> deposit;}
 
 cout <<"Annual Interest Rate (%) : ";
 cin >> annual;
 
  // Prompt and error trap
  
  while (annual <=0)
 {
 cout << "Invalid amount: Try again. ";
 cin >> annual;}
 
 cout <<"Term (Months)            : ";
 cin >> term;
 
  // Prompt and error trap
  
  while (term <=0)
 {
 cout << "Invalid amount: Try again. ";
 cin >> term;}
 
cout << endl;

// Displaying column titles

cout << "Starting     Interest      Monthly       Ending" <<endl;
cout << "Balance        Earned      Deposit      Balance" <<endl;
cout << "--------     --------     --------     --------" <<endl;
//14

// Setting two decimal places as default for money. 
cout << fixed << setprecision(2);

double start = 0.00;
double rate = annual/12*0.01;
double print1 = 1; 
double print2 = 2; 

// calculating rates from inputs

for (int a = 1; a <= term; a++)

{
    // loop outputs new results each time
    if (start < 100)
    {
              // Adds extra space for neater columns, if number is less than 100 (meaning less digits to display)
              cout <<"  ";}
              
    // calculations for outputs
    
    print1 = (start*rate);
    print2 = (deposit + start*rate+start);
    
    // output
    
    cout << start << "         " << print1 << "        ";
    cout << deposit << "         " << print2 << endl;

// new variables for next loop of outputs. 
   start = start*rate + deposit + start;

}

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
    cout << "David Hao 12 Robotics Set 2" <<endl;
    cout<< "-----------------------------------" << endl;
    cout<< "Select a program number and press enter."<<endl <<endl;
    cout<< "1 - Number Square" <<endl;
    cout<< "2 - Product" <<endl;
    cout << "3 - Factorial" <<endl;
    cout << "4 - Invest" << endl;
    
    cout <<endl << "Press 0 to quit the program."<<endl<<endl; 
    
    cin >> choice;
    // If/Else for options.
    if (choice == '1')
    {NumberSquare();}
    else if (choice == '2')
    {Product();}
    else if (choice == '3')
    {Factorial();}
    else if (choice == '4')
    {Invest();}
    
}
//Keeps program looping back to menu unless user exits. 
while (choice != '0'); 
    
              }
               


