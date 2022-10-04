#include <iostream>
using namespace std;
struct check{
    int number;
    string first_name;
    string last_name;
    int old_balance;
    int new_balance;
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
    cin >> check.old_balance;
    cout << "Enter your new balance: ";
    cin >> check.new_balance;
    cout << "Your check: " << check.first_name << ", " << check.number << ", " << check.new_balance << endl;
    
    return 0;
}
