#include <iostream>
#include <string>  
using namespace std;

//Write a program that asks the user to enter the month (letting the user enter 
//an integer in the range of 1 through 12) and the year.
//The program should then display the number of days in that month.

//HINT:  Use the following criteria to identify leap years:
// Determine whether the year is divisible by 100. 
//If it is, then it is a leap year if and only if it is divisible by 400. 
//For example, 2000 is a leap year but 2100 is not. 
//If the year is not divisible by 100, then it is a leap year if 
//and if only it is divisible by 4. For example, 2008 is a leap year but 2009 is not. 

//All source files ( remember source files are .cpp and .hpp and .h files )
//All data files (if used by your program).
//Screenshot of the software running on your machine.


int main(){
    int inputMonth;
    int calcDays;
    string monthName;
    int calcYear;
    int inputYear;
    string qualifier;


    cout << "Enter a month (1-12): " ;
    cin >> inputMonth;

    if (inputMonth < 1 || inputMonth > 12){
       cout << "Sorry, please enter 1-12 in the next run. ";
       return 1; // need this to end program if user enters a value outside of 1-12.
    }

    cout << "Enter a year: ";
    cin >> inputYear;
    if (inputYear > 0 ){
        calcYear = inputYear;
        qualifier = "AD";
    }
    else{
        calcYear = abs(inputYear);
        qualifier = "BC";
        }
    

    

    if (inputMonth == 1)
    {
    monthName = "January";
    }
    else if (inputMonth == 2)
    {
        monthName = "February";
    }
    else if (inputMonth == 3)
    {
        monthName = "March";
    }
     else if (inputMonth == 4)
    {
         monthName = "April";
    }
     else if (inputMonth == 5)
    {
         monthName = "May";
    }
     else if (inputMonth == 6)
    {
         monthName = "June";
    }
     else if (inputMonth == 7)
    {
         monthName = "July";
    }
    else if (inputMonth == 8)
    {
         monthName = "August";
    }
     else if (inputMonth == 9)
    {
         monthName = "September";
    }
     else if (inputMonth == 10)
    {
         monthName = "October";
    }
     else if (inputMonth == 11)
    {
         monthName = "November";
    }
     else if (inputMonth == 12)
    {
         monthName = "December";
    }


    if (inputMonth == 4 || inputMonth == 6 || inputMonth == 9 || inputMonth == 11){
        calcDays = 30;
        }
    else if (inputMonth == 1 || inputMonth == 3 || inputMonth == 5 || 
        inputMonth == 7 || inputMonth == 8 || inputMonth == 10 || inputMonth == 12){
        calcDays = 31; 
        }
    else if (inputMonth == 2 && inputYear % 100 == 0 && inputYear % 400 == 0 || inputMonth == 2 && inputYear % 10 != 0 && inputYear %4 == 0 )
        { calcDays = 29;}
    else {calcDays = 28;}

    

    // now determine if we are in a leap year and if February has 29 days
    // or if we are in a regular year and February has 28 days     
    // Determine whether the year is divisible by 100. 
    //If it is, then it is a leap year if and only if it is divisible by 400. 
    //For example, 2000 is a leap year but 2100 is not. 
    //If the year is not divisible by 100, then it is a leap year if 
    //and if only it is divisible by 4. For example, 2008 is a leap year but 2009 is not. 

    if (inputYear < 0 || inputYear > 0 && inputYear < 1000){     
        cout << "There were " << calcDays << " days in " << monthName << ", " << calcYear << " " << qualifier << "." << endl;
    }
    else{
        cout << "There were " << calcDays << " days in " << monthName << ", " << calcYear << "."<< endl;

    }
}