#include<iostream>
using namespace std;
class Angle{
	private:
		int degree;
		float minutes;
		char direction;
	public:
		Angle(){degree=0;minutes=0;direction='0';}
		Angle(int d,float m,char drc){degree=d;minutes=m;direction=drc;
		cout<<"Angle initialized through constructor:"<<degree<<"\xF8"<<minutes<<"\'"<<direction;
		}
		void obtainangle(){
			cout<<"\n\nEnter degree ";cin>>degree;
			cout<<"Enter minutes ";cin>>minutes;
			cout<<"Enter direction ";cin>>direction;
		}
		void showangle(){
			cout<<"\nAngle is : "<<degree<<"\xF8"<<minutes<<"\'"<<direction;
		}
};
int main(){
	Angle first(70,34,'W');
	Angle any;
	bool t=true;
	while(t=true){
		any.obtainangle();
		any.showangle();
	}
}
