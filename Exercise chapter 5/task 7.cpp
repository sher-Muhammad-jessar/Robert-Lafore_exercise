#include<iostream>
using namespace std;
void power(double n,int p=2){
	double result=1;
	for(int i=1;i<=p;i++){
		result*=n;
	}
	cout<<result;
}
void power(char c,int p=2){
	double result=1;
	for(int i=1;i<=p;i++){
		result*=c;
	}
	cout<<result;
}
void power(int num,int p=2){
	double result=1;
	for(int i=1;i<=p;i++){
		result*=num;
	}
	cout<<result;
}
void power(float decimal,int p=2){
	double result=1;
	for(int i=1;i<=p;i++){
		result*=decimal;
	}
	cout<<result;
}
void power(long no,int p=2){
	double result=1;
	for(int i=1;i<=p;i++){
		result*=no;
	}
	cout<<result;
}
int main(){
	int num=5;
	float decimal=0.5;
	char c='b';
	double n=0.7;
	long no=23;
	cout<<"\nInt :";power(num,3);
	cout<<"\nFloat :";power(decimal,2);
	cout<<"\nChar :";power(c,3);
	cout<<"\nDoouble :";power(n,4);
	cout<<"\nLong :";power(no,3);
}
