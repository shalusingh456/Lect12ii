#include<iostream>
using namespace std;
int main ()
{
	int a;
	int b;
	int c;
	int *p;
	int *q;
	
	p=&a;
	q=&b;
	
	a=1;  // i am only changing the value, but the address of a is still the same, so the pointer will still point to the same,no matter how the a is being changed
	b=5;
	
	c = *p+*q;
	
	p=1;
	q=2;

	//cout<<"The value of a is (from the actual variable type) "<<a<<endl;
	//	cout<<"The value of a from the pointer using*(astreix/ indirection operation)"<<*p<<endl;
	cout<<"The value of c is : "<<c<<endl;
	cout<<"The address of a is "<<&a<<"the value of the pointer is "<<p;
	return 0;
}