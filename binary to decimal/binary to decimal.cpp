
//***********************************************************************
//                   Binary 2 Decimal conversion IN C++ BY TECHNOSIER
//***********************************************************************

#include <iostream>
#include <cmath>
using namespace std;
int convertBinaryToDecimal(long long);

int main()
{
	long long n;
	
	cout<<"                                       Enter a binary number\n : ";
	cin>> n;
	
	cout<< "\n\nin binary   = " << "\t" << n << "\n\nin decimal  = \t" << convertBinaryToDecimal(n) << "\n\n" << "\t";
	system("pause");
	
}
int convertBinaryToDecimal(long long n)
{
	int decimalNumber =0, i=0, remainder;
	while (n!=0)
	{
		remainder = n%10;
		n /= 10;
		decimalNumber += remainder*pow(2,i);
		++i;
	}
	return decimalNumber;

}
