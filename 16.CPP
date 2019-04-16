#include<iostream>
#define pie 3.14
using namespace std;
class Circle
{
	public:
		float r,arcir;
		Circle()
		{
			cout << "\nCALCULATE AREA OF CIRCLE \n";
			cout << "Enter Radius : ";
			cin >> r;
			area();
		}
		void area()
		{
			arcir = pie*r*r;
			cout << "\nArea of circle : "<<arcir<<endl;
		}
		/*~Circle()
		{
			arcir = pie*r*r;
			cout << "\nArea of circle :"<<arcir<<endl;
		}*/
};
class Cylinder: public Circle
{
	public:
	float h,vlcy;
		Cylinder()
		{
			cout << "\nCALCULATE VOLUME OF CYLINDER\n";
			cout << "\nEnter Height : ";
			cin >> h;
			volume();
		}
		void volume()
		{
			vlcy = pie*r*r*h;
			cout << "\nVolume of Cylimder : "<< vlcy<<endl;
		}
		/*~Cylinder()
		{
			vlcy = pie*r*r*h;
			cout << "\nVolume of Cylimder :"<< vlcy;
		}*/
};
int main()
{
   Cylinder c1;
	return 0;
}
/*
CALCULATE AREA OF CIRCLE
Enter Radius : 2

Area of circle : 12.56

CALCULATE VOLUME OF CYLINDER

Enter Height : 1

Volume of Cylimder : 12.56

--------------------------------
Process exited after 10.4 seconds with return value 0
Press any key to continue . . .
*/
