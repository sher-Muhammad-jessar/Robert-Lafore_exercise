#include<iostream>
using namespace std;
void calltime(int& x){
	cout<<"I have been called "<<++x<<" times\n";
	
}
int main(){
	static int x;
	calltime(x);
	calltime(x);
	calltime(x);
	calltime(x);
	calltime(x);
	system("cls");
	calltime(x);
	
}
