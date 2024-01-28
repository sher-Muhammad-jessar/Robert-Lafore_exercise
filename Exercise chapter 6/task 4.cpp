#include<iostream>
using namespace std;
class Employee{
	private:
		int employeeno;
		float compensation;
	public:
		void setdata(){
			cout<<"\nEnter employee number:";cin>>employeeno;
			cout<<"Enter employee compensation:";cin>>compensation;
		}
		void displaydata(){
			cout<<"\nEmployee number:"<<employeeno;
			cout<<"\nEmployee compensation:"<<compensation;
		}
};
int main(){
	Employee employee[3];
	for(int i=0;i<3;i++){
		cout<<"\nEnter data for employee "<<i+1<<"\n";
		employee[i].setdata();
	}
	for(int i=0;i<3;i++){
		cout<<"\n\n"<<i+1<<" Employee data\n ";
		employee[i].displaydata();
	}
}
