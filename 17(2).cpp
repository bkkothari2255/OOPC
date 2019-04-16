#include<iostream>
using namespace std;
class Num //defining class
{
	public:
		float n;// data member 
		friend void incNum(Num);// friend function declaration
		Num()
		{
			cout << "Increment the Number\n";
			cout << "Enter Number : ";
			cin >> n;
		}
};
void incNum(Num a) // defining friend function to increment the value
{
	a.n++;
	cout << "After Incrementing = "<< a.n;
}
int main()
{
	Num n1;
	incNum(n1);
	return 0;
}
/*
Output :
Increment the Number
Enter Number : 5
After Incrementing = 6
--------------------------------
Process exited after 2.767 seconds with return value 0
Press any key to continue . . .
*/
