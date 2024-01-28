#include<iostream>
using namespace std;
int main()
{
	int n;
		cout<<"Enter any number : ";cin>>n;
	long fact=1;
if(n>0){

	for(int x=1;x<=n;x++){
		fact*=x;
		}
		cout<<"factorial is :"<<fact;}
		else cout<<"enter positive number";
		}
	
