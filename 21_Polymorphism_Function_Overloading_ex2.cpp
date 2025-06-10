#include<iostream>
using namespace std;

class Payment
{
	public:
	void payment_gateway(string parameter1)
	{
		cout << "Payment through UPI is Success" << endl;
	}
	void payment_gateway(string parameter1, string parameter2)
        {
                cout << "Payment through Debit Card is Success" << endl;
        }
	void payment_gateway(string parameter1, string parameter2, string parameter3)
        {
                cout << "Payment through Credit Card is Success" << endl;
        }
};

int main()
{
	Payment P1, P2, P3;
	P1.payment_gateway("upi");
	P2.payment_gateway("nil", "debit");
	P3.payment_gateway("nil", "nil", "credit");

	return 0;
}
