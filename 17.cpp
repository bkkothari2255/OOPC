#include<iostream>
using namespace std;
class Area //defining class
{
	public:
		float r,ar;// data member 
		friend void cirArea(Area);// friend function declaration
		Area()
		{
			cout << "CALCULATE AREA OF CIRCLE : \n";
			cout << "Enter Radius : ";
			cin >> r;
		}
};
void cirArea(Area a) // defining friend function to calculate area
{
	a.ar = (3.14)*(a.r)*(a.r);
	cout << "Circle area = "<< a.ar; 	
}
int main()
{
	Area c1;
	cirArea(c1);
	return 0;
}
/*
Output :
Enter Radius : 8
Circle area = 200.96
--------------------------------
Process exited after 5.263 seconds with return value 0
Press any key to continue . . .
*/
