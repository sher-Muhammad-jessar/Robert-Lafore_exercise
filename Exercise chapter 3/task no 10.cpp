#include<iostream>
using namespace std;
int main(){
	float final,initial;
	float rate;
	cout<<"initial amount:";cin>>initial;
	cout<<"Final amount:";cin>>final;
	cout<<"enter fixed rate:";cin>>rate;
	int i=0;
	while(final>initial)
	{
		float per=final*rate /100;
		final-=per;
		i++;
	}
	cout<<"Number of years :"<<i;
}
