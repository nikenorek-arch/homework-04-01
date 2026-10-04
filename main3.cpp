#include<iostream>
#include<windows.h>
#include <string>
using namespace std;



struct Address {
    string city;
    string street;
    int houseNumber;
    int apartmentNumber;
    int postalCode;
};

void printAddress(const Address& address) {
    cout << "Город: " << address.city << endl;
    cout << "Улица: " << address.street << endl;
    cout << "Номер дома: " << address.houseNumber << endl;
    cout << "Номер квартиры: " << address.apartmentNumber << endl;
    cout << "Почтовый индекс: " << address.postalCode << endl;
}


int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    Address address1{
        "Москва",
        "Тверская",
        10,
        5,
        123456
    };
    Address address2{
        "Санкт-Петербург",
        "Невский",
        20,
        15,
        123456
    };


    printAddress(address1);
    cout << endl;
    printAddress(address2);

}