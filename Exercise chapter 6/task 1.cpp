#include<iostream>
using namespace std;
class Int{
	private:
		int value;
	public:
		Int(){value=0;}
		Int(int x){value=x;}
		void setvalue(int x){value=x;}
		int getvalue(){return value;}
		void add(Int x,Int y){
		value=x.value + y.value;
		}
};
int main(){
	Int unint;
	Int int1(5);
	Int int2(7);
	unint.add(int1,int2);
	cout<<unint.getvalue();
	}
