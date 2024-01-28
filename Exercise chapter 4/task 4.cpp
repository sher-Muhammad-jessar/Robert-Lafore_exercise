#include<iostream>
using namespace std;
struct employee{
	int empno;
	float compensation;
};
int main(){
	employee emp1,emp2,emp3;
	cout<<"Enter employee number :";cin>>emp1.empno;
	cout<<"Enter employee compensation :$";cin>>emp1.compensation;
	cout<<"Enter employee number :";cin>>emp2.empno;
	cout<<"Enter employee compensation :$";cin>>emp2.compensation;
	cout<<"Enter employee number :";cin>>emp3.empno;
	cout<<"Enter employee compensation :$";cin>>emp3.compensation;
	cout<<"\n\n\Frist Employee Dertails:\n";
	cout<<"Employee number:"<<emp1.empno;
	cout<<"\nEmployee compensation:$"<<emp1.compensation;
	cout<<"\n\nSecond Employee Dertails:\n";
	cout<<"Employee number:"<<emp2.empno;
	cout<<"\nEmployee compensation:$"<<emp2.compensation;
	cout<<"\n\nThird Employee Dertails:\n";
	cout<<"Employee number:"<<emp3.empno;
	cout<<"\nEmployee compensation:$"<<emp3.compensation;
}
