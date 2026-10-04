#include<iostream>
#include<windows.h>
#include <string>
using namespace std;


struct BankAccount {
    int accountNumber;
    string ownerName;
    double balance;
};

void changeBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    cout << "Введите номер счёта: ";
    int accountNumber;
    cin >> accountNumber;


    cout << "Введите имя владельца: ";
    string ownerName;
    cin >> ownerName;

    cout << "Введите баланс: ";
    double balance;
    cin >> balance;

    cout << "Введите новый баланс: ";
    double newBalance;
    cin >> newBalance;

    BankAccount account {accountNumber, ownerName, balance};
    changeBalance(account, newBalance);

    cout << "Ваш счёт: " << account.ownerName << ", " << account.accountNumber << ", " << account.balance << endl;

}