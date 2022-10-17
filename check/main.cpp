#include <iostream>
using namespace std;
struct check{
    int number;
    string first_name;
    string last_name;
    int balance;
};
int main() {
    check check;
    cout << "Enter your number of check: ";
    cin >> check.number;
    cout << "Enter your first name: ";
    cin >> check.first_name;
    cout << "Enter your last name: ";
    cin >> check.last_name;
    cout << "Enter your balance: ";
    cin >> check.balance;
    cout << "Enter your new balance: ";
    cin >> check.balance;
    cout << "Your check: " << check.first_name << ", " << check.number << ", " << check.balance << endl;
    
    return 0;
}
