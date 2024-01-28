#include<iostream>
using namespace std;
class Say_its_no{
	private:
		int serialno;
		static int count;
	public:
		Say_its_no(){
		        serialno=++count;
		}
		void print_its_no(){
			cout<<"\nI am object no "<<serialno;
		}
};
int Say_its_no::count=0;
int main(){
	Say_its_no obj1,obj2,obj3;
	obj1.print_its_no();
	obj3.print_its_no();
	obj2.print_its_no();
	
}
