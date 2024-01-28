#include<iostream>
using namespace std;
int main()
{
	char in;
	do{
		int a,b,c,d;
		char ch;
		char op;
		
		cout<<"Enter first fractional number operator and second fractional number";cin>>a>>ch>>b>>op>>c>>ch>>d;
		switch(op){
			case'+':cout<<"Addition is : "<<(a*d)+(b*c)<<"/"<<(b*d);break;
			case'-':cout<<"Subtraction is : "<<(a*d - b*c)<<"/"<<(b*d);break;
			case'*':cout<<"Multiplication is : "<<(a*c)<<"/"<<(b*d);break;
			case'/':cout<<"Division is : "<<(a*d)<<"/"<<(b*c);break;
			default:cout<<"enter from these operation(+,_,*,/) ";
		}
		cout<<"\nDo you want to repeat(y/n)";cin>>in;
	}while(in=='y');
}
