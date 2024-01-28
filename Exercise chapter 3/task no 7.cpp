#include<iostream>
using namespace std;
int main()
{
   float amount;
   float  year;
   float interest;
   cout<<"Enter amount:";cin>>amount;
   cout<<"Enter no of years:";cin>>year;
   cout<<"Enter interest:";cin>>interest;
   for(int x;x<year;x++){
   	float per=(float)amount*interest /100;
    amount+=per;
   	
   }
   cout<<amount;

}

