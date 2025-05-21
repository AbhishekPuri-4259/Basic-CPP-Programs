#include <iostream>
using namespace std;

int add(int n1, int n2)
{
	return n1 + n2;
}

double add(double n1, double n2)
{
	return n1 + n2;
}

int main()
{
	cout << add(5, 10) << endl;
	cout << add(3.5, 6.5) << endl;

	return 0;
}
