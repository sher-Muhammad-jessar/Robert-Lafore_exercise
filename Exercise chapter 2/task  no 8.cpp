#include<iostream> 
#include<iomanip>
using namespace std;
int main()
{
	int num=2425789;
	string str="portcity";
	cout<<setw(10)<<str<<setw(15)<<setfill('.')<<num;
}
