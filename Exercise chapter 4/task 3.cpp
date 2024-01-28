#include<iostream>
using namespace std;
struct Distance{
	float feet;
	float inches;
};
struct volume{
	Distance length;
	Distance width;
	Distance height; 
};
float totalfeet(Distance d){
  return d.feet+d.inches/12;
}
int main(){
  volume v;
  v.length.feet=10;
  v.length.inches=12;
  v.width.feet=5;
  v.width.inches=4;
  v.height.feet=15;
  v.height.inches=8;
 float feet=totalfeet(v.length)*totalfeet(v.width)*totalfeet(v.height);
 cout<<"Total volume = "<<feet<<" cube feets";
	
}
