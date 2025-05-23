#include <iostream>
#include <string>

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
    std::cout << "Savings Account Interest: ₹" << SavingsAccount::calculateInterest(principal, rate, time) << std::endl;

    // Using LoanAccount namespace
    std::cout << "Loan Account Interest: ₹" << LoanAccount::calculateInterest(principal, rate, time) << std::endl;

    return 0;
}
