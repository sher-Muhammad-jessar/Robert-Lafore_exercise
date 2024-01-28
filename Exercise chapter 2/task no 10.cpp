#include<iostream>
using namespace std;
int main()
{
	int pound,shelling,pence;
	cout<<"Enter pounds: ";
	cin>>pound;
	cout<<"Enter shellings : ";
	cin>>shelling;
	cout<<"Enter pence : ";
	cin>>pence;
	float decimal=pound + shelling/20.0 + pence/240.0;
	cout<<"Decimal pounds ="<<char(156)<<decimal;
	return 0;
}
