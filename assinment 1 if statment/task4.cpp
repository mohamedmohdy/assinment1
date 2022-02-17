/*
Write a program to compute the perimeter and area of a rectangle. Your code
should ask user to insert the width and the height
● input(example)
Width = 5
Height = 3
● Output
The perimeter = 16
The area = 15
*/


#include <iostream>
using namespace std;
int main()
{
	int width , height , parameter , area;
	
	cout<<"please enter your width :";
	cin>>width;
	cout<<"please enter your height :";
	cin>>height;
	
	parameter = ( height + width ) * 2 ;
	area =  height * width ;
	
	
	cout<<"result parameter is : "<< parameter <<endl;
	cout<<"result area is : "<< area ;
	
	
	
}
