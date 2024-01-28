#include<iostream>
using namespace std;
int main(){

		float decpounds;
		int pounds;
		float decfrac;
		cout<<"Enter Decimal money amount :";cin>>decpounds;
		pounds=decpounds;
		decfrac=decpounds-pounds;
		int shelling=decfrac*20;
		int pence=(decfrac*20-shelling)*12;
		cout<<"The old money amount will be :£"<<pounds<<":"<<shelling<<":"<<pence;
		
	}

