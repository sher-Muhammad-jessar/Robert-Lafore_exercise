#include<iostream>
using namespace std;
class fraction{
	private:
		int numerator;
		int denominator;
	public:
		void getfraction(){
			char ch;
			cout<<"\nEnter fraction ";cin>>numerator>>ch>>denominator;
			cout<<"Fraction is :"<<numerator<<"/"<<denominator<<"\n";
		}
		void add(fraction f2){
			cout<<"\nSum is "<<(numerator*f2.denominator )+f2.numerator*denominator<< "/"<<denominator*f2.denominator;
		}
};
int main(){
	fraction f1,f2;
	char in='y';
	while(in=='y'){
		f1.getfraction();
		f2.getfraction();
		f1.add(f2);
		cout<<"\n\nDo you want to add other fraction press y ";cin>>in;
	}
}
