#include<iostream>
using namespace std;

int main()
{
	int num1 = 10, num2 = -2;
	cout << "welcome" << endl;

	try
	{
		if (num2 == 0)
			throw num2;

		else if (num2 < 0)
			throw "Error: Negative number is not allowed";
		
		else
			cout << "Result: " << num1/num2 << endl;
	}

	catch (...)
	{
		cout << "Unexpected Error" << endl;
	}

	cout << "Bye" << endl;
}
