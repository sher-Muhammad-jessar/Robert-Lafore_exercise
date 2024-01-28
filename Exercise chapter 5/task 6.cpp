#include<iostream>
using namespace std;
struct time{
	int hours;
	int minutes;
	int seconds;
};
long time_secs(time t){
	return (t.hours*3600)+(t.minutes*60)+t.seconds;
}
time secs_time(long totalsecs){
	time t;
	 t.hours=totalsecs/3600;
	t.minutes=(totalsecs-(t.hours*3600))/60;
	t.seconds=(totalsecs-(t.hours*3600+(t.minutes*60)));
	return t;
}
int main(){
	time t1,t2;
	char ch;
	cout<<"enter first time in this format(hours:minutes:seconds):";cin>>t1.hours>>ch>>t1.minutes>>ch>>t1.seconds;
	cout<<"enter second time in this format(hours:minutes:seconds):";cin>>t2.hours>>ch>>t2.minutes>>ch>>t2.seconds;
    long totalsecs=time_secs(t1)+time_secs(t2);
    time totaltime=secs_time(totalsecs);
    cout<<"Total time will be :"<<totaltime.hours<<":"<<totaltime.minutes<<":"<<totaltime.seconds;
    
}
