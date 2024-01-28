#include<iostream>
using namespace std;
class Time{
	private:
		int hours;
	int minutes;
	int seconds;
	public:
		Time(){	hours=0;minutes=0;seconds=0;}
		Time(int h,int m,int s){
			hours=h;minutes=m;seconds=s;
		}
		void display() const {	cout<<hours<<":"<<minutes<<":"<<seconds<<"\n";}
		void add (Time t1,Time t2){
			hours=t1.hours+t2.hours;
			minutes=t1.minutes+t2.minutes;
			seconds=t1.seconds+t2.seconds;
			if(minutes>=60){++hours;minutes-=60;}
			if(seconds>=60){++minutes;seconds-=60;}
		}
		
};
int main(){
	Time const t1(4,25,37);
	Time const t2(5,47,35);
	Time t3;
	t1.display();
	t2.display();
	t3.add(t1,t2);
	t3.display();
}
