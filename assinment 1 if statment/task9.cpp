#include <iostream>
using namespace std;
int main()
{
	int numper ;
	
	cout<<"enter your numper : ";
	cin>>numper;
	
	
	if(numper >= 1  &&  numper <= 12 )
		{
			switch(numper)
				{	
					case 1 :
						cout<<"junary";
					break;
				case 2 :
						cout<<"Febrair";
					break;
				case 3 :
						cout<<"Marsh";
					break;
				case 4 :
						cout<<"Abril";
					break;
				case 5 :
						cout<<"Mayo";
					break;
				case 6 :
						cout<<"June";
					break;
				case 7 :
						cout<<"July";
					break;
				case 8 :
						cout<<"August";
					break;
				case 9 :
						cout<<"September";
					break;
				case 10 :
						cout<<"October";
					break;
				case 11 :
						cout<<"November";
					break;
				case 12 :
						cout<<"December";
					break;
			
			}
		}
	else
		cout<<"error numper plesse add your numper between 1 and 12 ^_^ ";
	
		
		
		
		
		
		
		
		
		
		
		
		
		
	}

