#include <iostream>
#include <conio.h>
#include <algorithm>
#include <iomanip>
#include <cmath>

// David Hao TER Set 6
using namespace std; 

int* fill(int size) // reads in size from the driver, random array

{    
	int* ranarray = new int[size];  // new array, sized
	
	for(int x = 0; x < size; x++)
	
    { ranarray[x] = (rand()%10+1); } // random nums from 1 to 10
     
	return ranarray; // returns the completed array
}

int* drivefill(int &size) // driver, takes reference size from main
{
     system("CLS"); 
     cout << "Enter the amount of randomized numbers you wish to generate: "; // prompt
     cin >> size; // size is referenced back to the main
     return fill(size); // calls return with the size you input
     
}

int* input(int &size) //input custom array function, takes ref size

{

int *bigarray = new int [9999]; // start with very large array

int num;
int x = 0;

while (num!=(-1)) // -1 to quite, while loop.

{
      cin >> num;
      if (num != (-1))
      {
      bigarray[x] = num;  // reads in if its not -1
      x++;   
      }  
      
}

size = x;
      
    int *temp = new int [size];  // creates an adjusted array based on number of inputs
    for (int x = 0; x < size; x++)
    
    {
    temp[x] = bigarray[x];
    }
   
    delete[] bigarray; // old array deleted
    return temp; // new array returned

}

int* driveinput(int &size) // driver, takes size from main

{
     
system("CLS"); // prompts
cout << "This program accepts values for an array until -1 is entered." << endl;
cout << "Input values and press <Enter> after each one: " << endl; 

return input(size); // gets array back

}


double average (int* ranarray, int size) // takes average of the array
{
     int total = 0;  // start with total 0
     for (int x = 0; x < size; x++) // add to total for each element in array
     { total = total + ranarray[x];
    }
     
     double average = total/(size*1.0); // divide, convert to double if needed
     
    return average; 
}

void driveaverage(int* ranarray, int size) // driver
     {
                  // prompt
    cout << "The average of the generated set is " << average(ranarray,size) << endl; 
    getch();
    
}

int min (int *ranarray, int size)// Takes min of array
{    
     int min = ranarray[0];     
     for (int x = 0; x < size; x++) // if a value is the lowest, becomes min.
     { if (ranarray[x] < min) min = ranarray[x]; } // keeps going until through array
     return min;

}

void drivemin(int* ranarray, int size) // driver
{ 
    cout << "The minimum of the array is " << min(ranarray,size) << endl;   
    getch(); // output
}

int max (int* ranarray, int size) // takes max of array
{
     
     int max = ranarray[0]; // start with first element
     
     for (int x = 0; x < size; x++) // if largest, becomes max. keeps going. 
     { if (ranarray[x] > max) max = ranarray[x]; }

     return max; 
}

void drivemax(int* ranarray, int size) //driver

{
    cout << "The maximum of the array is " << max(ranarray,size) << endl;
    getch(); // output
}

int search(int* ranarray, int size, int searcher) // looks for a value, outputs first position
{
   
     int flag = 9999999; // sets a marker at a very high value  
     
     for (int x = 0; x < size; x++) // loops through array
     { if (searcher == ranarray[x] && x < flag) flag = x; 
     // if search value matches array value, plant flag. flag only plants the lowest time. 
     }
     
     if (flag ==9999999) flag = -1;  //if untouched, no results. flag is -1. 
     
     return flag;
}


void search(int* ranarray, int size) // driver
{
    int searcher, flag;

    cout << "Enter a value, between 1-10 (inclusive) to search for: "; //enter searching value
    cin >> searcher;

    flag = search(ranarray,size,searcher); // flag calls function, gets a value

    if(flag == -1) // check flag conditions
    cout << searcher << " was not found."; //not found (-1)
    else 
    cout << searcher << " was found initially at position " << flag+1; //found (element #)

    getch();
}

int addItem(int*& ranarray, int& size, int value, int position) //adds item to a position in array

{

     size++; // One bigger 
     
     int* temp = new int [size]; // New array of bigger size
     
     for (int x = 0; x < size; x++)
     {
         if (x < position) // If x is less than replace position, elements are equal
         {
               temp [x] = ranarray [x];
         }
         else if (x == position) //  inserts new value at that point
         {
               temp [x] = value;
         }
         else if (x > position) // flushes rest of elements one down to fill new spots
         {
               temp [x] = ranarray [x+1];
         }
     }
     delete [] ranarray; // deletes old array
     ranarray = temp; // replaces old with new
     return 0;
}

void addItem(int*& ranarray, int& size) //driver

{
    int value;
    int position;

    cout << "Enter the value to insert: "; //inserting value
    cin >> value;
    cout << "Assume is first position is 1." << endl; // conditions
    cout << "The value will in the slot above the inputted position." << endl;
    cout << "Enter the position to insert the value:  "; //inserting position
    cin >> position;

    addItem(ranarray,size,value,position); //insert value in array at pos
}

int removeItem(int*& ranarray, int& size, int position) // removes element at a position

{
    
	 
    size--; // one less the old size
    
    int* temp = new int [size]; // new, smaller arrray
    for (int x = 0; x < size; x++) // Repeat until array is filled
    {
        if (x < position) // same concept as addItem, except no replacing with new
        {
              temp [x] = ranarray [x];
        }
        else if (x >= position) 
        {
              temp [x] = ranarray [x+1]; // pushes values one up to new position
        }
    } 
    delete[] ranarray; // deletes old
    ranarray = temp;   // return new array
    return 0;
}
//removeItem_d: driver function for removeItem
void removeItem(int*& ranarray, int& size) // driver

{
    int position;
    
    cout << endl; // prompts
    cout << "Assume Element 1 is in position 1, and so on." << endl;
    cout << "Enter the position of the element to remove: ";
    cin >> position;

    removeItem(ranarray,size,position-1);
}


// Main program

int main()

{	srand(time(NULL));
    char choice;
     int size;
	int* ranarray;
	
		do{ // user must begin with 1 or 2 to obtain an array to use.
        system("CLS");
                  
		cout << "David Hao 12 Robotics Set 6" << endl;
		cout <<"-----------------------------------" << endl << endl;
		cout << "This program begins by generating a random array" << endl;
        cout <<" or inputting elements in to an array." <<endl << endl;
        
		cout << "1 - Random Array" << endl;
		cout << "2 - Input custom array " << endl;
		cin >> choice;
		
	} 
    //while loop as an error trap.
    while(choice != '1' && choice != '2');

	if(choice == '1')
	// declares the arrays
 ranarray = drivefill(size);
else 
ranarray = driveinput(size);
	
    do
    {
    
    system("CLS"); 
         
    // Display options
    
    cout << "David Hao 12 Robotics Set 6" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Select a program number and press enter."<<endl <<endl;
    cout << "1 - Fill" <<endl;
    cout << "2 - Input" <<endl;
    cout << "3 - Average" << endl;
    cout << "4 - Min" << endl;
    cout << "5 - Max" << endl;
    cout << "6 - Search" << endl;
    cout << "7 - addItem" << endl;
    cout << "8 - removeItem" <<endl;
    
    cout <<endl << "Press 0 to quit the program."<<endl; 
    cout <<endl << "Press 'X' to view the array." << endl;
        
    cin >> choice;

    if (choice == '1')
     {ranarray = drivefill(size);}
    
    else if (choice == '2')
    {ranarray = driveinput(size);
    }
    
    else if (choice == '3')
    {driveaverage(ranarray,size);}
    
    else if (choice == '4')
    {drivemin(ranarray,size);}
    
    else if (choice == '5')
    drivemax(ranarray,size);
    
    else if (choice == '6')
    search(ranarray,size);
    
    else if (choice == '7')
    addItem (ranarray, size);
    
    else if (choice == '8')
    removeItem(ranarray,size);
    
    else if (choice == 'X' || choice == 'x')
    
    { // to view the array
         for (int x = 0; x < (size); x++)
         {
         cout << "Element " << x+1 << " of " << size <<  " - "<< ranarray[x] << endl;}
         getch();
    }
}

//Keeps program looping back to menu unless user exits. 
while (choice != '0'); 
    
}
               


