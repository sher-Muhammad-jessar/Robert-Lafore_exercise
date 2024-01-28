#include<iostream>
#include<conio.h>
using namespace std;
class tollbooth{
	private:
		int totalcars;
		double totalmoney;
	public:
		tollbooth(){totalcars=0;totalmoney=0;}
	    void payingcar(){++totalcars;totalmoney+=0.50;}
	    void nopaycar(){++totalcars;}	
	    void display(){
	    	char ch;
	    	cout<<"Enter p for paying car ";
	    	cout<<"\nEnter n for unpaying car\n";
	    	while(ch!='\x1B'){
			ch=getch();
			
	    	if(ch=='p')payingcar();
	    	else if(ch=='n')nopaycar();
			cout<<ch<<" ";}
	    cout<<"\nTotal number of cars passed:"<<totalcars;
	    	cout<<"\nTotal money collected:"<<totalmoney;}
		
};
int main(){
	tollbooth toll;
	toll.display();
}
