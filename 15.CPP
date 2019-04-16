#include<iostream>
using namespace std;
class Num
{
    private:
        int n;
    public:
          Num()
          {
          	cout << "Enter Number : ";
          	cin >> n;
          }
          //unary ++ operator overloading
          void operator ++ (void)
          {
              n=++n;
          }
          ~Num()
          {
        	  cout << endl <<"After increment : "<< n;
          }
};
int main()
{
    Num num;
    ++num;
    return 0;
}
