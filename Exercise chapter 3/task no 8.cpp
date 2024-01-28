#include<iostream>
using namespace std;
int main()
{
char in;
do{

	int pound;
	int shelling;
	int pence;
	int pound1;
	int shelling1;
	int pence1;
	char ch;
		
	
	cout<<"Enter first amount:"<<char(156);
	cin>>pound>>ch>>shelling>>ch>>pence;
	cout<<"Enter second amount:"<<char(156);
	cin>>pound1>>ch>>shelling1>>ch>>pence1;
	int pound2=pound+pound1;
	int shelling2=shelling+shelling1;
	int pence2=pence+pence1;
    if(shelling+shelling1>=20)++pound2;shelling2-=20;
	if(pence+pence1>=12){++shelling2;pence2-=12;
	}
	cout<<char(156)<<pound2<<"."<<shelling2<<"."<<pence2;
	cout<<"\nDo you want to repeat (y/n)";cin>>in;
	}
	while(in=='y');
	
	
}
