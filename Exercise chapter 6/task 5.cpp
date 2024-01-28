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
			cout<<"Enter date  format(day/month/year):";cin>>day>>slash>>month>>slash>>year;
		}
		void showdate(){
			cout<<"You have entered date: "<<day<<"/"<<month<<"/"<<year;
		}
};
int main(){
	Date d;
	d.getdate();
	d.showdate();
}
