#include<iostream>
using namespace std;
struct fraction{
	int numerator;
	int denomenator;
};
int main(){
	fraction fra1,fra2,rfra;
	char ch;
	cout<<"Enter first fractional number:";cin>>fra1.numerator>>ch>>fra1.denomenator;
	cout<<"Enter Second fractional number:";cin>>fra2.numerator>>ch>>fra2.denomenator;
	rfra.numerator=fra2.denomenator*fra1.numerator + fra1.denomenator*fra2.numerator;
	rfra.denomenator=fra1.denomenator*fra2.denomenator;
	cout<<"sum is:"<<rfra.numerator<<"/"<<rfra.denomenator;
}
