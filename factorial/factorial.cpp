

//***********************************************************************
//                   Factorial of number IN C++ BY TECHNOSIER
//***********************************************************************


#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
	int n;
	
	cout << "\nEnter a positive integer : ";
	cin >> n;
	
	cout  << "\nFactorial of\t " << n << " = " << factorial(n) << "\n\n";

	system("pause");
}

int factorial(int n)
{
	if(n > 1)
		return n * factorial(n - 1);
	else
		return 1;
}
