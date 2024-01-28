#include<iostream>

using namespace std;
int main()
{ 
	float x,y;
	char op;
	char in;
	
	do{
		cout<<"Enter 1st number,operator,enter 2nd second :";
		cin>>x>>op>>y;
		switch(op){
			case'+':cout<<"Answer = "<<x+y;break;
			case'-':cout<<"Answer = "<<x-y;break;
			case'*':cout<<"Answer = "<<x*y;break;
			case'/':cout<<"Answer = "<<x/y;break;
			default:cout<<"Invalid operation";
			
		}
		
		cout<<"\nDo another (y/n)?";
		cin>>in;
		
	}while(in=='y');
	return 0;
}
