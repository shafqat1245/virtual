#include<iostream>
using namespace std;
class Account 
{
public:
    virtual void calculateInterest()= 0;  // Pure virtual function
};

class SavingsAccount : public Account 
{
public:
    double interest;
    double balance;
    double annualInterestRate;
public:
    void calculateInterest() 
    {
        interest = balance * (annualInterestRate / 100);
        cout << "Savings Account Interest: $" << interest << endl;
    }
};

class CheckingAccount : public Account
{
public:
    double balance;
    double fixedInterest;

    void calculateInterest() 
    {
        cout << "Checking Account Interest: $" << fixedInterest <<endl;
    }
};

int main() {
    // Create objects of SavingsAccount and CheckingAccount
    SavingsAccount savings;
    CheckingAccount checking;

    // Initialize data members directly
    savings.balance = 1000;
    savings.annualInterestRate = 2.5;
    checking.balance = 2000;
    checking.fixedInterest = 50;

    // Create an array of pointers to Account
    Account* accounts[2];
    accounts[0] = &savings;
    accounts[1] = &checking;

    // Calculate and display interest for each account
    for (int i = 0; i < 2; ++i) 
    {
        accounts[i]->calculateInterest();
    }

    return 0;
}