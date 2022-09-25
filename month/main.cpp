#include <iostream>
using namespace std;
enum month{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};
int main() {
    int user_number;
    while (user_number != 0) {
        cout << "Enter number of month: ";
        cin >> user_number;

        switch (user_number) {
            case 0:
                cout << " Good bye " << endl;
                break;
            case month::January:
                cout << " January " << endl;
                break;
            case month::February:
                cout << " February " << endl;
                break;
            case month::March:
                cout << " March " << endl;
                break;
            case month::April:
                cout << " April " << endl;
                break;
            case month::May:
                cout << " May " << endl;
                break;
            case month::June:
                cout << " June " << endl;
                break;
            case month::July:
                cout << " July " << endl;
                break;
            case month::August:
                cout << " August " << endl;
                break;
            case month::September:
                cout << " September " << endl;
                break;
            case month::October:
                cout << " October " << endl;
                break;
            case month::November:
                cout << " November " << endl;
                break;
            case month::December:
                cout << " December " << endl;
                break;
            default:
                cout << " Wrong month " << endl;
                break;
        }
    }

    return 0;
}
