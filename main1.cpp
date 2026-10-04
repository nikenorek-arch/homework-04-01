#include<iostream>
#include<windows.h>
using namespace std;

enum class Month {
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


int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);



    int number;
    while (true) {
        cout << "Введите номер месяца: ";
        if (!(cin >> number)) {
            cout << "Неправильный номер!" << endl;

            cin.clear();
            cin.ignore(10000, '\n');

            continue;
        }

        if (number == 0) {
            cout << "До свидания" << endl;
            break;
        } else if (number < 1 || number > 12) {
            cout << "Неправильный номер!" << endl;
            continue;
        }

        Month month = static_cast<Month>(number);

        switch (month) {
            case Month::January:
                cout << "Январь" << endl;
                break;
            case Month::February:
                cout << "Февраль" << endl;
                break;
            case Month::March:
                cout << "Март" << endl;
                break;
            case Month::April:
                cout << "Апрель" << endl;
                break;
            case Month::May:
                cout << "Май" << endl;
                break;
            case Month::June:
                cout << "Июнь" << endl;
                break;
            case Month::July:
                cout << "Июль" << endl;
                break;
            case Month::August:
                cout << "Август" << endl;
                break;
            case Month::September:
                cout << "Сентябрь" << endl;
                break;
            case Month::October:
                cout << "Октябрь" << endl;
                break;
            case Month::November:
                cout << "Ноябрь" << endl;
                break;
            case Month::December:
                cout << "Декабрь" << endl;
                break;
        }

    }



}