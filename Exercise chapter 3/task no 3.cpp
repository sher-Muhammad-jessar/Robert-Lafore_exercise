#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	long output;
	int i;
	char input;
	cout<<"Enter the number maximiun six characters:";
	output=0;i=0;
	
	while((input=getch())!=13&&i<=6)
	{
	cout<<input;
		output=output*10 + (input-48);
		i++;
		if(i==6)break;
		
	}
	
	cout<<"\n Number is :"<<output;
	

}
