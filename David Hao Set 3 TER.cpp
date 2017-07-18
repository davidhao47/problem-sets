#include <iostream>
#include <conio.h>
#include <algorithm>
#include <iomanip>
#include <cmath>

// David Hao TER Set 3
using namespace std; 



int Multiple() //Input a number, shows multiples of that number up to 100.
{
    system("CLS");
    int number;
    cout << "Enter an integer: "; // prompt for num
    cin >> number;
     int total = number; 
     cout << "The multiples of " << number << " are ";
    while ( (total) <= 100) // condition for total to be less than 100 or equal
    {
          total = total + number; 
          if (total <= 100) //error trap, only records if less than 100
          { 
          cout << total << " ";
          }      
}
    getch();
    return 0;
}
        
int Target()

// Takes three inputs: Monthly deposit, annual interest rate, target
// Calculates rates and new sums, monthly, displays results in columns until target.
{
 system("CLS");
 double deposit, annual, target;
  
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
  cout <<"Target Value             : ";
 cin >> target;
 
  // Prompt and error trap
  
  while (target<=0)
 {
 cout << "Invalid amount: Try again. ";
 cin >> target;}
 
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
int month = 0;
// calculating rates from inputs

while (print2 <=target) // stops once total exceeds the target amount

{
    // amount of column space, varies by amount of digits of initial sum
    if (start < 99.99 && start >= 10)
    {cout <<"  ";}  // Adds extra space for neater columns  
    if (start >= 0 && start < 9.99)
    {cout <<"   ";}  
    if (start < 999.99 && start >=100.00)
    {cout <<" ";}
    // calculations for outputs
    
    print1 = (start*rate);
    print2 = (deposit + start*rate+start);
    
   // cout << start<< print1 << "        ";
   cout << start; 
   //adjusting column widths, outputting amount of spaces depending on 
   // number of digits of that variable for aligned columns.
   
    if (print1 >= 100.00 && print1 <=999.99){cout << "          ";} //8 spaces
    else if (print1 >= 1000.00 && print1 <= 9999.99) {cout << "        ";} // 7 spaces
    else if (print1 >= 10.00 &&  print1 <= 99.99) {cout << "          ";} //10
    else if (print1 >= 0.00 && print1 <= 9.99) {cout << "           ";} // 11
    
    cout <<print1;
    
    if (deposit >= 0 && deposit <=9.99){cout << "       ";} // 7 spaces
    else if (deposit >= 10.00 && deposit <= 99.99){cout <<"     ";} //6 spaces
    else if (deposit >= 100.00 && deposit <= 999.99){cout <<"     ";} //5
    else if (deposit >= 1000.00 && deposit <= 9999.99){cout <<"    ";}
    
    cout << deposit;
    
    if (print2 >= 100.00 && print2<= 999.99) {cout << "       " ;} //7
    else if (print2 >=10.00 && print2 <=99.99){cout << "        " ;} //8
    else if (print2 >= 0 && print2 <= 9.99) {cout << "         " ;}// 6
    else if (print2 >= 1000.00 && print2 <= 9999.99) {cout<< "      " ;} //6
    
    else {cout<< "     ";} // if all else fails.
    
    cout << print2 << endl; 
    
// new variables for next loop of outputs. 
   start = start*rate + deposit + start;
   month++;
}

cout << endl<< "It took " <<month<< " months to reach your target."; // final statement

 getch();
 
}

int Deposit()
// Asks for a starting sum, prompts for withdrawls and deposits, calculates and
// ends if deposit command is -1 or if total is negative. 
{    
system ("CLS"); 
cout << fixed << setprecision(2); // set money to two digits.

double starting;
cout << "Starting balance: ";
cin >> starting; // prompt for inital sum 
int month = 1;
double deposit = 0, withdraw = 0;

// loop, while conditions are fulfilled. 

while (starting > 0 && deposit != -1)
{
      cout<<"Month #" << month << "\t";
      cout <<"Deposits: ";
      cin >> deposit; // prompt for deposits
      if (deposit != -1) // only accept a withdrawl if not the quit command. 
      {
      cout <<"       ";
      cout<<"\t\t" << "Withdrawals:";
      cin >> withdraw;
      }
      cout << endl;          
      month++; // increment month
      starting = starting + deposit - withdraw; // recalculate balance
}

if (deposit = -1) // since a deposit of -1 is still calculated, when the 
// quit command is used, the balance is incremented by one to make up for this.
{starting += 1;}

// final statement.
cout << "You have $" << starting <<" left.";
    getch();
    return 0;    
}

int Destination()
//Prompts for a distance total, keeps prompting until distance left is zero/less than zero.
 
{
          system("CLS");
     double distance, track; 
    cout << "Distance to destination: ";
    cin >> distance; // prompt for initial distance
    cout << endl;
    int step = 1, num =1;
    double amountleft = distance;
    double total = 0;
    
    while (amountleft >0) // loop while there is still distance left
    {
    cout<< "Step " << num << " distance: ";
    cin >> track; // prompt for amount of distance covered
    amountleft -= track; //recalculate amount left
    total += track; // recalculate total amount travelled 
    cout <<endl;
    cout << "       Total is " << total << " km" << endl;
    cout<< endl;
    
    num++; //increment counter
}
cout << "You have reached your destination."; // final output
    
    getch();
    return 0;

}

// Main program

int main()

{
    char choice;
    do
    {
         
    system("CLS"); 
         
    // Display options
    cout << "David Hao 12 Robotics Set 3" <<endl;
    cout<< "-----------------------------------" << endl;
    cout<< "Select a program number and press enter."<<endl <<endl;
    cout<< "1 - Multiples" <<endl;
    cout<< "2 - Target" <<endl;
    cout << "3 - Deposit" <<endl;
    cout << "4 - Destination" << endl;
    
    cout <<endl << "Press 0 to quit the program."<<endl<<endl; 
    
    cin >> choice;
    // If/Else for options.
    if (choice == '1')
    {Multiple();}
    else if (choice == '2')
    {Target();}
    else if (choice == '3')
    {Deposit();}
    else if (choice == '4')
    {Destination();}
    
}
//Keeps program looping back to menu unless user exits. 
while (choice != '0'); 
    
   }
               


