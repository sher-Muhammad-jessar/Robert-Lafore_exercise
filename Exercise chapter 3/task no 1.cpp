#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num;
	int count;
	cout<<"Enter any number ";cin>>num;
cout<<"Multiples are \n";
for(int x=1;x<=200;x++)
{
	cout<<setw(4)<<num*x<<"  ";
	++count;
	if(count==10)
	{
	cout<<endl;
	count=0;}
	
	
}
	
	
}
