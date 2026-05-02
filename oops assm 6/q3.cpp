#include <iostream>
using namespace std;

class Account {
    const long account_no;
    long transaction_id;
    string type;
    double balance;

public:
    Account(long a) : account_no(a) {
        transaction_id = 0;
        balance = 0;
    }

    long depositAmount(long to, long from, double amount) {
        balance += amount;
        transaction_id++;
        type = "credit";
        return transaction_id;
    }

    long creditAmount(long to, long from, double amount) {
        balance -= amount;
        transaction_id++;
        type = "debit";
        return transaction_id;
    }

    void displayDetails() const {
        cout << account_no << endl;
        cout << balance << endl;
        cout << transaction_id << endl;
        cout << type << endl;
    }
};

int main() {
    Account a1(101), a2(102);

    a1.depositAmount(101, 102, 500);
    a1.creditAmount(102, 101, 200);

    a1.displayDetails();

    return 0;
}