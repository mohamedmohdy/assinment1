/*
Write a program to convert a given integer (in seconds) to hours,
minutes and seconds.
● Test Data :
Input seconds: 25300
● Expected Output:
H:M:S - 7:1:40
*/

#include <iostream>
using namespace std;
int main()
{
	int sec, h , m , s ;
	
	cout<<"input second : ";
	cin>>sec ;
	
	h = sec / 3600 ;
	m = (sec - (3600*h)) / 60 ;
	s = (sec - (3600*h) - (m*60) );
	
	cout<<" H : M : S  = : "<< h << " : " << m <<" : " << s ;   
		
		
		
		
		
		
		
		
		
		
		
		
	}

