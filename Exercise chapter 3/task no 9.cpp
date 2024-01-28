#include<iostream>
using namespace std;
int main(){
	int guest;
	int chairs;
	cout<<"Enter the number of guests:";cin>>guest;
	cout<<"Enter the number of chairs:";cin>>chairs;
	if(guest>chairs){
	
	int pos=1;
	
	int regst=guest-chairs;
	for(int x=regst+1;x<=guest;x++){
		pos*=x;
}
cout<<pos;}
	else {
	cout<<"No of guests should be greater than chairs";}
}
