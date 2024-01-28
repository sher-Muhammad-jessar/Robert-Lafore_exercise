#include<iostream>
using namespace std;
struct path{
	int feet;
	float inches;
};
path largerdistance(path d1,path d2){
	float distance1=d1.feet + d1. inches/12;
	float distance2=d2.feet + d2. inches/12;
	if(distance1>distance2){
		return d1;
	}
	else return d2;
}
int main(){
	path d1,d2;
	cout<<"Enter distance 1 feet :";cin>>d1.feet;
	cout<<"Enete distance 1 inches :";cin>>d1.inches;
	cout<<"\nEnter distance 1 feet :";cin>>d2.feet;
	cout<<"Enete distance 1 inches :";cin>>d2.inches;
	path larger=largerdistance(d1,d2);
	cout<<"Larger distance will be "<<larger.feet<<" feet "<<larger.inches<<" inches";
	
}
