#include<iostream>
using namespace std;
struct sterling{
	int pound;
    int shelling;
    int pence;
};
void input(sterling& m1,sterling& m2){
	char ch;
	cout<<"Enter money1(pound:shelling:pence) :";cin>>m1.pound>>ch>>m1.shelling>>ch>>m1.pence;
	cout<<"Enter money2(pound:shelling:pence) :";cin>>m2.pound>>ch>>m2.shelling>>ch>>m2.pence;
}
sterling add(sterling m1,sterling m2){
	sterling m3;
	m3.pound=m1.pound+m2.pound;
	m3.shelling=m1.shelling+m2.shelling;
	m3.pence=m1.pence+m2.pence;
	return m3;
}
sterling display(sterling m1,sterling m2){
	sterling m4=add(m1,m2);
	if(m4.shelling>=20){
		++m4.pound;
		m4.shelling-=20;
	}
	if(m4.pence>=12){
		++m4.shelling;
		m4.pence-=12;
	}
	cout<<"\nTotal money will be:"<<m4.pound<<":"<<m4.shelling<<":"<<m4.pence;
}
int main(){
	sterling m1,m2;
	input(m1,m2);
	display(m1,m2);
	return 0;
}
