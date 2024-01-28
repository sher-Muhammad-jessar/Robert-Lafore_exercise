#include<iostream>
using namespace std;
struct time{
	int hours;
	int minutes;
	int seconds;
};
void swap(time& ta,time& tb){
	time tc=tb;
	time td=ta;
	ta=tc;
    tb=td;
	
}
int main(){
	time t1,t2;
	t1.hours=2;
	t1.minutes=34;
	t1.seconds=57;
	t2.hours=3;
	t2.minutes=18;
	t2.seconds=27;
	cout<<"\n\t\tBefore calling function\n";
	cout<<"\nFirst time :"<<t1.hours<<":"<<t1.minutes<<":"<<t1.seconds;
		cout<<"\nSecond time:"<<t2.hours<<":"<<t2.minutes<<":"<<t2.seconds;
		swap(t1,t2);
		cout<<"\n\t\tAfter calling function\n";
	cout<<"\nFirst time :"<<t1.hours<<":"<<t1.minutes<<":"<<t1.seconds;
		cout<<"\nSecond time:"<<t2.hours<<":"<<t2.minutes<<":"<<t2.seconds;
}
