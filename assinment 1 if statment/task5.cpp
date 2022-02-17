/*
Write a program to convert specified days into years, weeks and days.
● Test Data : Number of days : 1329
● Expected Output :
Years: 3
Weeks: 33
Days: 3
*/


#include <iostream>
using namespace std;
int main()
{
	 int days, years, weeks;

    days = 1329; 

    // Converts days to years, weeks and days
    years = days/365; 
    weeks = (days % 365)/7;
    days = days- ((years*365) + (weeks*7));
    
    cout<<"years is : "<< years <<endl;
    cout<<"weeks is : "<< weeks <<endl;
	cout<<"days  is : "<< days <<endl;
	
}
