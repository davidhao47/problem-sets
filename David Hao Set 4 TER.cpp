#include <iostream>
#include <conio.h>
#include <algorithm>
#include <iomanip>
#include <cmath>
                                                                                                        
                                                                                                     
// David Hao TER Set 4
using namespace std; 



int Change() //User inputs monetary amount, amount is sorted into change. 

{
    system("CLS");
     
    double amount = 0;
    cout << fixed << setprecision(2); // set default to two decimals
    cout << "Enter a monetary amount: "; // prompt for amount
    cin >> amount;
    
    
    int loonie = int(amount);  //loonie: integer typecast to truncate decimal 
    double left = amount*100 - loonie*100;  // calculate how much is left
    
    int cents =  (int)left; // integer typecast to use for %
    if (cents < left) {cents++;} 
    
    int quarter = cents/25; //quarters: divide cents by 25
    int left2 = cents%25; //amount left after
    
    int dime = (left2)/10; //dimes: divide by 10
    int left3 = (left2)%10; // amount left after
    
    int nickel = (left3)/5; // nickels: divide by 10
    int left4 = (left3)%5; // amount left after
    
    if (left4>=8) // rounding 
    {dime = dime + 1;}
    else if (left4 >2 && left4 <=7) // rounding
    {nickel = nickel+1;}

if (quarter == 3 && dime == 2 && nickel == 1 ) // if coins equal a dollar, increment loonie
{quarter = 0; 
dime = 0;
nickel = 0;
loonie++;}

    if (nickel == 1 && dime == 2) // consolidate to a quarter
    {
    nickel = 0;
    dime = 0;
    quarter++;}
               
   if (nickel == 2) // consolidate two nickels to a dime
{ nickel = 0;
dime++;}
    
// output

// if the amount exists, display. 
if (loonie > 0) cout << "Amount of dollars: " << loonie <<endl;
if (quarter > 0) cout << "Amount of quarters: " << quarter <<endl;
if (dime > 0) cout << "Amount of dimes: " << dime <<endl;
if (nickel > 0) cout << "Amount of nickels: " << nickel <<endl;
         
    getch();
    return 0;
}
        
int Prime() //determines if a user-inputted number is prime or not

{
 system("CLS");
 int prime; 

 cout <<"This program determines whether a number is a prime number or not." << endl;
 cout <<"Enter a positive integer: ";
 cin >> prime; // prompt
 
 while (prime <= 0) // error trap for invalid inputs
 
{
       cout << "Invalid input. Try again." <<endl;
        cout <<"Enter a positive integer: ";
        cin >> prime;
}

double test = 0;
int type = 0;
double test2;
bool checkmark;

for (int x = 2; x < prime; x++) //loop repeats from 2 - number. 

{
    
 test = prime/(x*1.0); // division by the x value
 type = int(test); // typecast into integer
 test2 = test-type; // tests whether quotient is an integer

 if (test2 == 0) // checkmark becomes true if quotiest is integer
 {checkmark = true;}
 // cout << test <<"  " << type << "  " << test2 << endl; 
 
}

//output
if (checkmark == true)
{
cout << prime << " is not a prime number.";
}
else 
{
cout << prime << " is a prime number.";
}

getch();
return 0;
}
         

int GCF()

// Inputs two numbers, determines their GCF.

{    

system ("CLS"); 

int num1 = 0;
int num2 = 0;
int orig1 = 0;
int orig2 = 0;
	
	cout <<"This program determines the greatest common factor of two numbers." <<endl;
	cout << "Enter an integer: "; //enter two integers
	cin >> num1;

 while (num1 <= 0) // error trap for invalid inputs
 
{
       cout << "Invalid input. Try again." <<endl;
        cout <<"Enter a positive integer: ";
        cin >> num1;
}

	cout << "Enter a second integer: "; // enter a new integer 
	cin >> num2;
	
	orig1 = num1;
	orig2 = num2;
	
	while(num1 != num2) // Euclidian algorithm consisting of subtractions until equal
    {	
	if(num1 > num2)
         num1 = num1 - num2; //Euclidian algorithm to find GCF
	else
        {num2 = num2 - num1;
        }
	}

	//output
	cout << "The greatest common factor of " << orig1 << " and " << orig2 << " is " << num1;
	
    getch();

}

int Yahtzee() //Rolls five six-sided dice, outputs yahtzee if all match
{
    system("CLS");

    int num1 = rand()%6+1;// Random numbers from 1-6
    int num2 = rand()%6+1;
    int num3 = rand()%6+1;
    int num4 = rand()%6+1;
    int num5 = rand()%6+1; 
	
cout << "The result of five dice rolls: "<< endl; //output

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num4 << endl;
    cout << num4 << endl;
	
// Output if conditions are fulfilled

	if(num1 == num2 && num2 == num3 && num3 == num4 && num4 == num5)
    { cout << "Yahtzee!";} //if all equal, yahtzee
	else 
    {cout << "The six did not match.";}
	
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
    cout << "David Hao 12 Robotics Set 4" <<endl;
    cout<< "-----------------------------------" << endl;
    cout<< "Select a program number and press enter."<<endl <<endl;
    cout<< "1 - Change" <<endl;
    cout<< "2 - Prime" <<endl;
    cout << "3 - GCF" <<endl;
    cout << "4 - Yahtzee" << endl;
    
    cout <<endl << "Press 0 to quit the program."<<endl<<endl; 
    
    cin >> choice;
    // If/Else for options.
    if (choice == '1')
    {Change();}
    else if (choice == '2')
    {Prime();}
    else if (choice == '3')
    {GCF();}
    else if (choice == '4')
    {Yahtzee();}
    
}
//Keeps program looping back to menu unless user exits. 
while (choice != '0'); 
    
}
            
