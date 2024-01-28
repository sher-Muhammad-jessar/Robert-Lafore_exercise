#include<iostream>
using namespace std;
struct date{
	int day;
	int month;
	int year;
};
int main(){
        date d;
		char ch;
		cout<<"Enter date in this format(day/month/year):";cin>>d.day>>ch>>d.month>>ch>>d.year;
		cout<<"Your date is :"<<d.day<<ch<<d.month<<ch<<d.year;
	
}
