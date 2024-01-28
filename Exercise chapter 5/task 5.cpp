#include<iostream>
using namespace std;
int hms_s(int hours,int minutes,int seconds){
	return (hours*3600)+(minutes*60)+seconds;
}
int main(){
	int hours,minutes,seconds;
	char colon;
	cout<<"\n\nEnter time in format(hours:minutes:seconds):";cin>>hours>>colon>>minutes>>colon>>seconds;
	cout<<"\nTotal seconds are :"<<hms_s(hours,minutes,seconds);
}
