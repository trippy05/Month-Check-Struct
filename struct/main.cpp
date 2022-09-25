#include <iostream>
using namespace std;
struct information{
    string city;
    string street;
    int house_number;
    int apartment_number;
    int index;
};
void change_inf(information &info){
    cout << "Enter city: ";
    cin >> info.city;
    cout << "Enter street: ";
    cin >> info.street;
    cout << "Enter house number: ";
    cin >> info.house_number;
    cout << "Enter apartament number: ";
    cin >> info.apartment_number;
    cout << "Enter index: ";
    cin >> info.index;
}
void print_change(const information &info){
    cout << info.city << endl;
    cout << info.street << endl;
    cout << info.house_number << endl;
    cout << info.apartment_number << endl;
    cout << info.index << endl;

}
int main() {
    information info;
    cout << "Enter city: ";
    cin >> info.city;
    cout << "Enter street: ";
    cin >> info.street;
    cout << "Enter house number: ";
    cin >> info.house_number;
    cout << "Enter apartament number: ";
    cin >> info.apartment_number;
    cout << "Enter index: ";
    cin >> info.index;
    cout << info.city << endl;
    cout << info.street << endl;
    cout << info.house_number << endl;
    cout << info.apartment_number << endl;
    cout << info.index << endl;
    change_inf(info);
    print_change(info);
    return 0;
}
