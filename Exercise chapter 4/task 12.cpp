#include<iostream>
#include<algorithm>
using namespace std;
struct fraction{
	int numerator ;
	int denominator;
};
int gcd(int x,int y)
	{
		if(y==0)return x;
		return gcd(y,x%y);
		
	}
	void simplify(int& x,int& y)
	{
		int commondivisor=gcd(x,y);
		x/=commondivisor;
		y/=commondivisor;
	}
int main(){
	fraction f1,f2,f3;
	char ch;
	char operation;
	cout<<"\n\t\t\tWELCOME TO THE CALCULATOR\n\t\t\tOPERRATION TO PERFORM(+,-,*,/)\n";
	cout<<"Enter first fraction : ";cin>>f1.numerator>>ch>>f1.denominator;
	cout<<"Enter Second fraction : ";cin>>f2.numerator>>ch>>f2.denominator;
	cout<<"Enter operation: ";cin>>operation;
	switch(operation){
		case'+':{
	f3.numerator=(f1.numerator*f2.denominator)+(f1.denominator*f2.numerator);
		        f3.denominator=f1.denominator*f2.denominator;
				break;}
				case'-':{
	f3.numerator=(f1.numerator*f2.denominator)-(f1.denominator*f2.numerator);
		        f3.denominator=f1.denominator*f2.denominator;
				break;}
				case'*':{
	f3.numerator=f1.numerator*f2.numerator;
		        f3.denominator=f1.denominator*f2.denominator;
				break;}
				case'/':{
	f3.numerator=(f1.numerator*f2.denominator);
		       f3.denominator=f1.denominator*f2.numerator;
				break;}
	}
	int x=f3.numerator,y=f3.denominator;

	simplify(x,y);
	cout<<"Result is :"<<x<<"/"<<y;
	}
