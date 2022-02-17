#include <iostream>
using namespace std;
int main()
{
	int numper1 , numper2 , numper3 , numper4 , numper5 ;
	cin>>numper1>>numper2>>numper3>>numper4>>numper5;
	
	if((numper1%2==1)  ||  (numper2%2==1)  || (numper3%2==1) || (numper4%2==1) || (numper5%2==1) )
		{
			if(numper1%2==0)
				{
					numper1 = 0 ;	
				}	
			else if (numper2%2==0)
				{
					numper2 = 0 ;
				}
			else if (numper3%2==0)
				{
					numper3 = 0 ;
				}
			else if (numper4 %2==0)
				{
					numper4 = 0 ;
				}
			else 
				{
					numper5 = 0 ; 
				}
			
			cout<<numper1+numper2+numper3+numper4+numper5;
	}
		else
			cout<<"all numper is even";
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
			
		 } 		
		
		


