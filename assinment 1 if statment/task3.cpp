/*
write a program that ask user to insert 3 integers then print the average as
decimal number
● input
Please enter first number:
6
Please enter second number
4
Please enter third number
4
● output
The average = 4.66667
*/

#include <iostream>
using namespace std;
int main()
{
	int numper1 , numper2 , numper3 , sum = 0  ;
	double avg ;
	cout<<"please enter your first numper : ";
	cin>>numper1;
	cout<<"please enter your second numper : ";
	cin>>numper2;
	cout<<"please enter your thired numper : ";
	cin>>numper3;
	
	sum = numper1+numper2+numper3;
	avg = sum / 3.0 ;
	cout<<"result avarge is : "<<avg;
	
	
	
}
