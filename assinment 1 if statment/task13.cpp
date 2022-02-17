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

