#include<iostream>
using namespace std;
int power(int n,int p=2){
	int result=1;
	for(int i=1;i<=p;i++){
	result=result*n;
	}
	return result;
}
int main(){
	int n,p;
	cout<<"Enter number:";cin>>n;
	cout<<"Enter power:";cin>>p;
	cout<<n<<" raise to power "<<p<<" is : "<<power(n,p);
	
}
