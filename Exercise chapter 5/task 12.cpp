#include<iostream>
using namespace std;
struct fraction{
	int numerator;
	int denominator;
};
fraction fadd(fraction f1,fraction f2){
	fraction f3;
    f3.numerator=(f1.numerator*f2.denominator)+(f1.denominator*f2.numerator);
		        f3.denominator=f1.denominator*f2.denominator;
		        return f3;
}
fraction fsub(fraction f1,fraction f2){
	fraction f3;
    f3.numerator=(f1.numerator*f2.denominator)-(f1.denominator*f2.numerator);
		        f3.denominator=f1.denominator*f2.denominator;
		        return f3;
}
fraction fmul(fraction f1,fraction f2){
	fraction f3;
    f3.numerator=f1.numerator*f2.numerator;
		        f3.denominator=f1.denominator*f2.denominator;
		        return f3;
}
fraction fdiv(fraction f1,fraction f2){
	fraction f3;
	f3.numerator=(f1.numerator*f2.denominator);
		       f3.denominator=f1.denominator*f2.numerator;
		        return f3;
}
int main(){
	fraction f1,f2;
	char ch;
	char operation;
	cout<<"\n\t\t\t\tWELCOME TO THE FOUR FUNCTION CALCULATIOR\n";
	cout<<"\n\t\t\t\t\t(+,-,*,/)\n";
	cout<<"Enter first fraction:";cin>>f1.numerator>>ch>>f1.denominator;
	cout<<"Enter second fraction:";cin>>f2.numerator>>ch>>f2.denominator;
	cout<<"Enter operation : ";cin>>operation;
	switch(operation){
		case'+':{
			fraction f3=fadd(f1,f2);
			cout<<"Result is :"<<f3.numerator<<"/"<<f3.denominator;
			break;
		}
		case'-':{
			fraction f3=fsub(f1,f2);
			cout<<"Result is :"<<f3.numerator<<"/"<<f3.denominator;
			break;
		}
		case'*':{
			fraction f3=fmul(f1,f2);
			cout<<"Result is :"<<f3.numerator<<"/"<<f3.denominator;
			break;
		}
		case'/':{
			fraction f3=fdiv(f1,f2);
			cout<<"Result is :"<<f3.numerator<<"/"<<f3.denominator;
			break;
		}
		default:cout<<"Invalid operation";
	}
	
}
