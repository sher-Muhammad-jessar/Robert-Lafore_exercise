#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	char dumychar;
	cout<<"Enter 1st fractional number : ";
	cin>>a>>dumychar>>b;
	cout<<"Enter 2nd fractional number : ";
	cin>>c>>dumychar>>d;
	cout<<"Sum is = "<<float(a*d + b*c)<<"/"<<(b*d);
}
