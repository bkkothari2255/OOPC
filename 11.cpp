#include <iostream> 
#include<cmath>
using namespace std; 
inline int large(int n1,int n2,int n3) 
{
	//return n3 < fmax(n1,n2)? fmax(n1,n2) : n3;
  	  if(n1>n2 && n1>n3)	  return n1;
	  else if(n2>n1 && n2>n3) return n2;
	  else  return n3;
}
int main()
{ 
	int a,b,c;
	cout << "Enter three numbers : ";
	cin>>a>>b>>c;
	cout<<large(a,b,c)<< "\n"; 
	return 0; 
}
/*
Enter three numbers : 55 66 22
66

--------------------------------
Process exited after 6.598 seconds with return value 0
Press any key to continue . . .
*/
