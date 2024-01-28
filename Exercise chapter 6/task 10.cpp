#include<iostream>
using namespace std;
class Angle{
	private:
		int degree;
		float minutes;
		char direction;
	public:
		void setangle(){
			cout<<"\nEnter degree : ";cin>>degree;
			cout<<"Enter minutes : ";cin>>minutes;
			cout<<"Enter direction(S,W,E,N) : ";cin>>direction;
		}
		void getangle(){
			cout<<degree<<"\xF8"<<minutes<<"\'"<<direction;
		}
};
class Ship{
    private:
	   static int serialno;	
	   int shipnumber;
	   Angle longtitude;
	   Angle latitude;
	public:
		Ship(){
			shipnumber=++serialno;
		}
		void setposition(){
			cout<<"\n* Enter Ship "<<shipnumber<<" postion\n";
			cout<<"• Enter longtitude";
			longtitude.setangle();
			cout<<"• Enter latitude";latitude.setangle();
		}
		void reportposition(){
		cout<<"\n• Ship number : "<<shipnumber;
		cout<<"\n• Ship Longtitude : ";longtitude.getangle();
		cout<<"\n• Ship latitude : ";latitude.getangle();
		}
};
int Ship::serialno=0;
int main(){
	Ship sh[3];
	for(int i=0;i<3;i++){
		sh[i].setposition();
	}
	for(int i=0;i<3;i++){
		cout<<"\n\nShip details \n";
		sh[i].reportposition();
	}
}

