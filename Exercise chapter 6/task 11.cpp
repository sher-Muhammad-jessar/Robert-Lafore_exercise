#include<iostream>
using namespace std;
class fraction{
	private:
		int numerator;
		int denominator;
	public:
		void setfraction(){
			char ch;
			cout<<"\nEnter fraction ";cin>>numerator>>ch>>denominator;
		}
		int gcd(fraction f3){
			while(f3.denominator!=0){
				int greater=f3.denominator;
				f3.denominator=f3.numerator%f3.denominator;
				f3.numerator=greater;
			}
			return f3.numerator;
		}
		void add(fraction f2){
			fraction result;
			result.numerator=(numerator*f2.denominator )+f2.numerator*denominator;
			result.denominator=denominator*f2.denominator;
			int d=gcd(result);
			cout<<"\nSum is "<<result.numerator/d<<"/"<<result.denominator/d;
		}
		void subtract(fraction f2){
			fraction result;
			result.numerator=(numerator*f2.denominator )-f2.numerator*denominator;
			result.denominator=denominator*f2.denominator;
			int d=gcd(result);
			cout<<"\nSubtraction is "<<result.numerator/d<<"/"<<result.denominator/d;		}
		void multiply(fraction f2){
			fraction result;
			result.numerator=(numerator*f2.numerator);
			result.denominator=denominator*f2.denominator;
			int d=gcd(result);
			cout<<"\nMultiplication is "<<result.numerator/d<<"/"<<result.denominator/d;
		}
		void divide(fraction f2){
			fraction result;
			result.numerator=(numerator*f2.denominator);
			result.denominator=denominator*f2.numerator;
			int d=gcd(result);
			cout<<"\nDivision is "<<result.numerator/d<<"/"<<result.denominator/d;
		}
		void display(fraction f1,fraction f2){
			char ch;
			cout<<"Enter operation to perform(+,-,*,/) ";cin>>ch;
			switch(ch){
				case'+':f1.add(f2);break;
				case'-':f1.subtract(f2);break;
				case'*':f1.multiply(f2);break;
				case'/':f1.divide(f2);break;
				default:cout<<"Invalid output";
			}
		}
};
int main(){
	fraction f1,f2;
	char in='y';
	while(in=='y'){
		f1.setfraction();
		f2.setfraction();
		f1.display(f1,f2);
		cout<<"\n\nDo you want to perform other calculation press y ";cin>>in;
	}
}
