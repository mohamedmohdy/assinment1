/*
13.Write a program that take 3 integer from user then print the max element and
the min element.
● Example
Input 7 8 5
Output
max element = 8
min element = 5
● Example2
Input 3 6 9
Output
Max element = 9
Min element = 3
*/

#include <iostream>
using namespace std;
int main()
{
	int numper1 , numper2 , numper3 ;
	
	cout<<"enter your 3 numper ";
	cin>>numper1>>numper2>>numper3;
	
	if(		(numper1 > numper2)   &&  (numper1 > numper3)  )
		{
			if(	(numper2 < numper1)  && (numper2 < numper3)	)
					{	
						cout<<" max is : "<<numper1 << " min is : "<<numper2;	
					}
			else
					{
							cout<<" max is : "<<numper1 << " min is : "<<numper3;
					}	
			
		}	
	else if (	(numper2 >  numper1) && (numper2 > numper3) ) 
		{
			if( (numper3 < numper2)  && (numper3 < numper1) )
					{
						cout<<"Max is : "<<numper2 <<" Min is : "<<numper3 ;
					}
			else
					{
						cout<<"Max is : "<<numper2 <<" Min is : "<<numper1 ;
					}
		}
	else if (	(numper3 > numper1) && (numper3 > numper2)	)
		{
			if(	(numper1 < numper2) && (numper1 < numper3)	)
					{
						cout<<"Max is : "<<numper3<<" Main is : "<<numper1;
					}
			else
					{
						cout<<"Max is : "<<numper3<<" Main is : "<<numper2;
					}
		}

		
		
			
		
		
		
		
		
		
		
}

