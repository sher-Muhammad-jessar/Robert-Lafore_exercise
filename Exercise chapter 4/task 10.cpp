#include<iostream>
using namespace std;
struct money
{
int pound;
int shelling;
int pence;	
};
int main(){
	money m1;
	float dollar;
	cout<<"Enter amount in decimal number: ";cin>>dollar;
	m1.pound=dollar;
    m1.shelling=(dollar-m1.pound) / (dollar-m1.pound)/12);
	cout<<m1.pound<<"."<<m1.shelling;
	
}
