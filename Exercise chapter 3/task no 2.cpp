#include<iostream>
using namespace std;
int main()
{
	float x;
	int in;
	char value;
	do
	{
	    cout<<"Type 1 to convert Fahrenheit into Celsius\n";
		cout<<"Type 2 to convert Celsius into Fahrenheit"<<endl;
		cin>>in;
		if(in==1)
		{
		cout<<"Enter temperature in Fahrenheit";cin>>x;
		cout<<"The temperature in Celsius is : "<<5*(x-32)/9; 
			}
		else if(in==2)
		{
		cout<<"Enter temperature in Celsius ";cin>>x;
		cout<<"The temperature in Fahrenheit is : "<<(x*9/5)+32; 
			}	
			else cout<<"Invalid input";
			cout<<"\nDo you want to repeat(y/n) ";cin>>value;
	}while(value=='y');
}
