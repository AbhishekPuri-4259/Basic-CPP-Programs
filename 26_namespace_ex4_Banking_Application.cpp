#include <iostream>
#include <string>

using namespace std;

namespace SavingsAccount 
{
    double calculateInterest(double principal, double rate, int time) 
    {
        return (principal * time * rate) / 100; // Intrest formula
    }
}

namespace LoanAccount 
{
    double calculateInterest(double principal, double rate, int time) 
    {
        return (principal * time * rate) / 100 + 650; // Additional processing fee
    }
}

int main() 
{
    double principal = 10000;
    double rate = 5;
    int time = 2;

    // Using SavingsAccount namespace
    cout << "Savings Account Interest: ₹" << SavingsAccount::calculateInterest(principal, rate, time) << endl;

    // Using LoanAccount namespace
    cout << "Loan Account Interest: ₹" << LoanAccount::calculateInterest(principal, rate, time) << endl;

    return 0;
}
