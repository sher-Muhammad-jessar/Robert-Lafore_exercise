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
	char op;	
	
	cout<<"Enter first amount:"<<char(156);
	cin>>pound>>ch>>shelling>>ch>>pence;
	cout<<"Enter second amount:"<<char(156);
	cin>>pound1>>ch>>shelling1>>ch>>pence1;
	cout<<"enter operator:";cin>>op;
	
	int pound3=pound-pound1;
	int shelling3=shelling-shelling1;
	int pence3=pence-pence1;
    switch(op){
	case'+':
		{
		int pound2=pound+pound1;
	int shelling2=shelling+shelling1;
	int pence2=pence+pence1;
	if(pence+pence1>=12){++shelling2;pence2-=12;
	}
	if(shelling2>=20){++pound2;shelling2-=20;
	}
	cout<<char(156)<<pound2<<"."<<shelling2<<"."<<pence2;}break;
	case'-':{
	
	
	int pound3=pound-pound1;
	int shelling3=shelling-shelling1;
	int pence3=pence-pence1;	
		
	if(pence3>=12){++shelling3;pence3-=12;
	}
	if(shelling3>=20){++pound3;shelling3-=20;
	}
	cout<<char(156)<<pound3<<"."<<shelling3<<"."<<pence3;}
	
	}
	cout<<"\nDo you want to repeat (y/n)";cin>>in;
	}
	while(in=='y');
	
	
}
