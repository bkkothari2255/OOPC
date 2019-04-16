#include<iostream>
using namespace std;
void ex(int &,int &); // function declaration
int main()
{
	int a,b;
	cout << "Enter two numbers : ";
	cin >> a >> b;
	cout << endl<<"Before exchange : ";
	cout << a << " "<< b << endl;
	ex(a,b);
	cout <<"After exchange : ";
	cout << a << " " << b << endl;
	return 0;
}
void ex(int &m,int &n) // m and n are reference variable
{
	int t;
	t=n;
	n=m;
	m=t;
	cout << endl ;
}
/*
Output : 
Enter two numbers : 55 77

Before exchange : 55 77

After exchange : 77 55

--------------------------------
Process exited after 4.639 seconds with return value 0
Press any key to continue . . .
*/
