/*
Write a program that allows the user to insert an integer then print negative if it
is a negative number otherwise print positive.
● Example
Input -5
Output negative
● Example2
Input 10
Output positive
*/



#include <iostream>
using namespace std;
int main()
{
	int numper1 =  0  , numper2 = 0  , numper3 = 0  , numper4 = 0  , numper5 = 0  ;
	int sum ;
	
	
	cout<<"please add your numper : ";
	cin>>numper1>>numper2>>numper3>>numper4>>numper5;
	
	if(numper1 / 2 == 1 )
		sum = numper1 ;
	else if (numper2 / 2 == 1 )
		sum = numper2 ;
	else if (numper3 / 2 == 1 )
		sum = numper3 ;
	else if (numper4  / 2 == 1 )
		sum = numper4 ;
	else if ( numper5 / 2 == 1 )
		sum = numper5 ;
	 
				
		
		
		cout<<sum;
		
		
		
	}
