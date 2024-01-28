#include<iostream>
using namespace std;
struct phone {
	int areacode;
	int exchange;
	int number;
};
int main(){
	phone no1,no2;
	cout<<"Enter your area code, exchange and number :";cin>>no1.areacode>>no1.exchange>>no1.number;
	no2.areacode=212;
	no2.exchange=767;
	no2.number=8900;
	cout<<"My number is :("<<no2.areacode<<") "<<no2.exchange<<"-"<<no2.number;
	cout<<"\nYour number is :("<<no1.areacode<<") "<<no1.exchange<<"-"<<no1.number;
	
	
}
