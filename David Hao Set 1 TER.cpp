#include <iostream>
#include <conio.h>
#include <algorithm>
#include <iomanip>

using namespace std; 


int Arithmetic()
{
    system("CLS");
    int num1, num2; 
    
    cout << "Input a number and press enter. \n";
    cin >> num1;
    
    cout << "Input a second number and press enter. \n";
    cin >> num2;
    
    system ("CLS"); 
    
    cout << "Operand #1: " << num1 << endl;
    cout << "Operand #2: " << num2 << endl;
    

    
    cout << endl;
    cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
     cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
      cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
      
      if (num2 == 0)
      {
       cout << num1 << " / " << num2 << " = UNDEFINED" << endl;
       }
       
       else
       {
        cout << num1 << " / " << num2 << " = " << num1*1.0/num2 << endl;
        }
        
        getch();
        return 0;
       
        }
        
int Equation()

{    
system ("CLS"); 
int a, b;
    cout << "Enter values for Ax + B = 0" <<endl;
    cout << "A: " ;
    cin >> a;
    cout <<endl;
    cout << "B: "; 
    cin >> b;
    cout<<endl<<endl;
    cout << a << "x + " << b << " = 0" << endl;
    cout << a << "x = " <<  -b << endl;
    cout << "x = " <<-b << "/" << a << endl;
    if (a == 0)
    {   cout << "x = " << "UNDEFINED" <<endl; }
    else {
    cout << "x = " << -b*1.0/a <<endl;}
    
    getch();
    return 0;
    
}

int Pizza()

{
    char size;
    int num1 = 0, num2 = 0, num3 = 0, small = 0, medium = 0, large = 0;
    
    system("CLS"); 
    cout << "Welcome to Pizzamart!" << endl <<endl;
    cout <<"\tMENU"<< endl;
    cout << "-----------------------------" << endl;
    cout << "Small - $6.99" << endl;
    cout << "Medium - $8.99" <<endl;
    cout << "Large - $10.99" << endl;
    cout << "-----------------------------" << endl;
    cout <<endl;
    
    cout << "Enter 'S' to order small pizzas, 'M' for mediums and 'L' for larges." <<endl<<endl;
    size = getch();
    
    do
    {
         
    if (size == 'S' | size == 's')
    {
             
                 tryAgain:
             system("CLS");
             cout << "How many small pizzas would you like?" << endl;
             cin >> num1; 
             
             if (num1 < 0)
             {cout << "You cannot order a negative amount."<<endl;
             getch();
             goto tryAgain;}
             small = num1 + small;
             cout << "Would you like to order other pizzas?" << endl;
             cout << "Enter 'M' for mediums and 'L' for larges. Enter '0' to proceed to checkout." <<endl<<endl;
             size = getch();  
             
             
    }
    if (size == 'M' | size == 'm')
    {
             tryAgain2:
              system("CLS");
             cout << "How many medium pizzas would you like?" << endl;
             cin >> num2;
             
             if (num2 <0) 
             {cout << "You cannot order a negative amount."<<endl;
             getch();
             goto tryAgain2;}
              medium = num2 + medium;
             cout << "Would you like to order other pizzas?" << endl;
             cout << "Enter 'S' for smalls and 'L' for larges. Enter '0' to proceed to checkout." <<endl<<endl;
             size = getch();  
    }
    if (size == 'L' | size == 'l')
    {
             tryAgain3:
              system("CLS");
             cout << "How many large pizzas would you like?" << endl;
             cin >> num3;
             if (num3 <0)
             {cout << "You cannot order a negative amount."<<endl;
             getch();
             goto tryAgain3;} 
             large = large + num3;
             cout << "Would you like to order other pizzas?" << endl;
             cout << "Enter 'M' for mediums and 'S' for smalls. Enter '0' to proceed to checkout." <<endl<<endl;
             size = getch();  
    }
}
    while (size != '0');
    
     system("CLS");
    cout << "You ordered " <<small <<" small pizzas, " << medium << " medium pizzas, and " << large << " large pizzas." << endl<<endl;
    cout<< "Small total: $" << small*6.99 << endl;
    cout <<"Medium total: $"<< medium*8.99<< endl;
    cout <<"Large total: $" << large*10.99 << endl<<endl;
    cout<< "Subtotal: $" << num1*6.99 + num2*8.99 + num3*10.99 << endl;
    
    getch();
    return 0; 
}

int Paycheque()
{
 cout << fixed << setprecision(2);
    system("ClS");
    
    int hours, ohours, rhours; 
    double wage, regular,overtime; 
    tryAgain:
             
  cout << "Input the amount of work hours this week and press enter.\n";
  cin >> hours;
  if (hours < 0)
  {
            cout << "You cannot work less than zero." << endl;
            goto tryAgain;}
  cout << endl;
  cout << "Input the wage per hour and press enter.\n";
  cin >> wage;
   if (wage < 0)
  {
            cout << "You shouldn't be paying someone else to work for them. Try again." << endl;
            goto tryAgain;}
  cout << endl;
  
  if (hours <= 40)
  {
            regular = hours*wage;
            cout << "There were no overtime hours this week. The regular pay is $" << regular << endl;
            
  
}
 else if (hours > 40)
 {
     ohours = hours - 40; 
     cout << "There were " << ohours<< " overtime hours this week. The regular pay is $" << wage*40 << ". The overtime pay is $" << ohours*wage*1.5;
     cout << ", for a total of $" << wage*40 + ohours*wage*1.5 << endl; 
 } 
       
 
      
  getch();
return 0; 
}

int Sort()

{
    system("CLS");
    int array[3];
    
    cout << "Input three integers and press 'Enter' after each one." <<endl;
    cin >> array[0] >> array[1] >> array[2];
    
    cout << endl;
    
    sort(array,array+3);
    cout << "From highest to lowest: " << array[2] << ", " << array[1] << ", " << array[0] << endl;
    getch();
    
    return 0; 
    
}

int main()

{
    char choice;
    do
    {
         system("CLS"); 
    cout << "David Hao 12 Robotics Set 1" <<endl;
    cout<< "-----------------------------------" << endl;
    cout<< "Select a program number and press enter."<<endl <<endl;
    cout<< "1 - Arithmetic" <<endl;
    cout<< "2 - Equation" <<endl;
    cout << "3 - Paycheque" <<endl;
    cout << "4 - Pizza" << endl;
    cout << "5 - Sort" <<endl;
    
    cout <<endl << "Press 0 to quit the program."<<endl; 
    
    cin >> choice;
    
     
    
        
    if (choice == '1')
    { Arithmetic();}
    else if (choice == '2')
    { Equation();
    }
    else if (choice =='3')
    {Paycheque();}
    else if (choice == '4')
    {Pizza();}
    else if (choice == '5')
    {Sort();}
    
}
while (choice != '0'); 
    
               
               
}

