#include<iostream>
using namespace std;
void zerosmaller(int& a,int& b){
	if(a>b){
		b=0;
	}
	else a=0;
}
int main(){
	int a,b;
	cout<<"\t\tSmaller number will be zero\n\n";
	cout<<"Enter number 1:";cin>>a;
	cout<<"Enter number 2:";cin>>b;
	zerosmaller(a,b);
	cout<<"\n\nFirst number :";cout<<a;
	cout<<"\nSecond number :";cout<<b;
	
}
