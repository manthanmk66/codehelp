/*
	fucntion having same name but different data types.
*/

#include<iostream>
using namespace std;
void add(int ,int );
void add(double,double);


void add(int a, int b)
{
	cout<<"addition = "<<(a+b)<<endl;
}

void add(double a, double b)
{
	cout<<"addition = "<<(a+b)<<endl;
}




int main()
{
	add(10,20);
	add(10.5,20.5);
	
	return 0;
}
