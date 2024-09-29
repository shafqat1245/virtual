#include <iostream>
using namespace std;

// Abstract class PaymentMethod
class PaymentMethod {
public:
    // Pure virtual function to process payment
    virtual void processPayment(double amount) = 0;
    
    // Pure virtual function to refund the amount
    virtual void refund(double amount) = 0;
    
    // Virtual destructor
    virtual ~PaymentMethod() {}
};

// Concrete class for CreditCard
class CreditCard : public PaymentMethod {
public:
    void processPayment(double amount) override {
        // Implement credit card payment logic
        cout << "Processing credit card payment of $" << amount << endl;
        // Additional credit card payment logic can be added here
    }

    void refund(double amount) override {
        // Implement credit card refund logic
        cout << "Refunding $" << amount << " to credit card" << endl;
        // Additional credit card refund logic can be added here
    }
};

// Concrete class for PayPal
class PayPal : public PaymentMethod {
public:
    void processPayment(double amount) override {
        // Implement PayPal payment logic
        cout << "Processing PayPal payment of $" << amount << endl;
        // Additional PayPal payment logic can be added here
    }

    void refund(double amount) override {
        // Implement PayPal refund logic
        cout << "Refunding $" << amount << " to PayPal" << endl;
        // Additional PayPal refund logic can be added here
    }
};

// Concrete class for BankTransfer
class BankTransfer : public PaymentMethod {
public:
    void processPayment(double amount) override {
        // Implement bank transfer payment logic
        cout << "Processing bank transfer payment of $" << amount << endl;
        // Additional bank transfer payment logic can be added here
    }

    void refund(double amount) override {
        // Implement bank transfer refund logic
        cout << "Refunding $" << amount << " via bank transfer" << endl;
        // Additional bank transfer refund logic can be added here
    }
};

// Main function to demonstrate payment processing and refunds
int main() {
    // Create instances of different payment methods
    PaymentMethod* paymentMethods[] = {
        new CreditCard(),
        new PayPal(),
        new BankTransfer()
    };

    // Process payments and refunds
    double amountToProcess = 100.00;
    double amountToRefund = 50.00;

    for (PaymentMethod* method : paymentMethods) {
        method->processPayment(amountToProcess);
        method->refund(amountToRefund);
        cout << endl;  // Add a blank line for readability
    }

    // Clean up allocated memory
    for (PaymentMethod* method : paymentMethods) {
        delete method;
    }

    return 0;
}