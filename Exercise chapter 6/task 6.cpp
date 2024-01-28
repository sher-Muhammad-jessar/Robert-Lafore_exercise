#include<iostream>
using namespace std;
class Date{
	private:
		int month;
		int day;
		int year;
	public:
		void getdate(){
			char slash;
			cin>>day>>slash>>month>>slash>>year;
		}
		void showdate(){
			cout<<day<<"/"<<month<<"/"<<year;
		}
};
enum etype{laborer,manager,secretary,accountant,executive
};

class Employee:public Date{
	private:
		int employeeno;
		float compensation;
		Date hiringdate;
		etype employeetype;
	public:
		void setdata(){
			char employee;
			cout<<"\nEnter employee number: ";cin>>employeeno;
			cout<<"Enter employee compensation: ";cin>>compensation;
			cout<<"Enter Date of hiring of employee: ";hiringdate.getdate();
			cout<<"Enter employee type laborer,secretary,executive,manager,accountant(first letter only) ";
			cin>>employee;
			switch(employee){
		    	case'l':employeetype=laborer;break;
		    	case'e':employeetype=executive;break;
		    	case'm':employeetype=manager;break;
		    	case's':employeetype=secretary;break;
		    	case'a':employeetype=accountant;break;
		    	default:cout<<"Invalid datails";
			}
		}
		void displaydata(){
			cout<<"\nEmployee number: "<<employeeno;
			cout<<"\nEmployee compensation: "<<compensation;
		    cout<<"\nEmployee date of hiring : ";hiringdate.showdate();
		    
			string empltype;
			switch(employeetype){
				case laborer :empltype="laborer";break;
				case accountant :empltype="accountant";break;
				case manager :empltype="manager";break;
				case executive :empltype="executive";break;
				case secretary :empltype="secretary";break;
				}
			cout<<"\nEmployee is "<<empltype;
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
