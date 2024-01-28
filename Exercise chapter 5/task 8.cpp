#include<iostream>
using namespace std;
void swap(int& a,int& b){
	a=a+b;
	b=a-b;
	a=a-b;
}
int main(){
	int x=4,y=7;
	cout<<"\n\t\tBefore calling function\n";
	cout<<"\nFirst number :"<<x;
		cout<<"\nSecond number:"<<y;
		swap(x,y);
		cout<<"\n\t\tAfter calling function\n";
	cout<<"\nFirst number :"<<x;
		cout<<"\nSecond number:"<<y;
}
