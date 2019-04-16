// istream::get example
#include <iostream>     // std::cin, std::cout
#include<string.h>
using namespace std;
int main () 
{
	char str[100];
  	cout << "Enter the STRING in first alphabet : ";
  	cin.get (str,100);    // get c-string
	cout << "STRING in second alphabet : ";
	int i=0;
  	while(str[i]!='\0')
  	{
		strlwr(str);
		cout.put(str[i]);
		i++;
	}
  return 0;
}
/*
Enter the STRING in first alphabet : PREFINAL @ DR SUBHASH TECHNICAL CAMPUS
STRING in second alphabet : prefinal @ dr subhash technical campus
--------------------------------
Process exited after 21 seconds with return value 0
Press any key to continue . . .
*/
