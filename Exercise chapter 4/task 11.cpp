#include<iostream>
using namespace std;
struct time{
	int hours;
	int minutes;
	int seconds;
};
int main(){
	time t1,t2,tt;
	char ch;
	cout<<"enter first time in this format(hours:minutes:seconds):";cin>>t1.hours>>ch>>t1.minutes>>ch>>t1.seconds;
	cout<<"enter second time in this format(hours:minutes:seconds):";cin>>t2.hours>>ch>>t2.minutes>>ch>>t2.seconds;
	long totalt1=(t1.hours*3600)+(t1.minutes*60)+t1.seconds;
    long totalt2=(t2.hours*3600)+(t2.minutes*60)+t2.seconds;
    long total=totalt1+totalt2;
    tt.hours=total/3600;
	tt.minutes=(total-(tt.hours*3600))/60;
	tt.seconds=(total-(tt.hours*3600+(tt.minutes*60)));
	cout<<"Total time is :"<<tt.hours<<":"<<tt.minutes<<":"<<tt.seconds;
    
}
