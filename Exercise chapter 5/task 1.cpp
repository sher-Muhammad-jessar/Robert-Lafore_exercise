#include<iostream>
using namespace std;
float circarea(float radius){
	float pi=(float)22/7;
	return pi * radius*radius;
}
int main(){
	float radius;
	
	cout<<"Enter radius of circle to find area:";cin>>radius;
	cout<<circarea(radius);
}
