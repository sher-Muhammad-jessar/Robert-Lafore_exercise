#include<iostream>
using namespace std;
enum etype{laborer,secretary,manager,accountant,executive,researcher
};
int main(){
	etype employee;
    char ch;
    cout<<"Enter employee type(First letter only)laborer,secretary,manager,accountant,executive,researcher:";cin>>ch;
    switch(ch){
    	case'l':employee=laborer;break;
		case's':employee=secretary;break;
    	case'm':employee=manager;break;
		case'a':employee=accountant;break;
    	case'e':employee=executive;break;
		case'r':employee=researcher;break;
    	default:cout<<"Invalid output";
    	}
    	string employeetype;
    	switch(employee){
    		case laborer:employeetype="laborer";break;
    		case secretary:employeetype="secratery";break;
    		case manager:employeetype="manager";break;
    		case accountant:employeetype="accountant";break;
    		case executive:employeetype="executive";break;
    		case researcher:employeetype="researcher";break;
    		
		}
		cout<<"Employee type:"<<employeetype;
}
