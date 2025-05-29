#include <iostream>
using namespace std;

class HDFCBankAccount
{
	private:
    	double balance;

	public:
    	HDFCBankAccount(double initialBalance)
	{
		balance = initialBalance;
	}

    	void withdraw(double w_amount) 
	{       
		try 
		{
            		if (w_amount > balance)
			{
                		throw "Insufficient balance for withdrawal";
			}
			else
			{
            			balance -= w_amount;
            			cout << "Withdrawal successful!" << endl;
				cout << "Remaining balance: " << balance << endl;
			}
        	}

		catch (char const* error) 
		{
            		cout << error << endl;
        	}
    	}
};

int main() 
{
    HDFCBankAccount Harish(5000); //Initial balance = 5000

    cout << "Attempting to withdraw 6000..." << endl;
    Harish.withdraw(6000); // Exceeds balance

    cout << "************************************************************" << endl;
    cout << "Bro, it's the end of the month. Try again!" << endl;
    cout << "************************************************************" << endl;

    cout << "Attempting to withdraw 3000..." << endl;
    Harish.withdraw(3000); // Valid withdrawal

    return 0;
}
