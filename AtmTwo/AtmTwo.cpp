#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");

    cout << endl;
    int const banknote1 = 100;
    int const banknote2 = 200;
    int const banknote3 = 500;
    int const banknote4 = 1000;
    int const banknote5 = 2000;
    int const banknote6 = 5000;
    int limit = 150000;
    int summ = 0;
    int numberOfBanknotes = 0;

    cout << " Введите сумму к выдаче: ";
    cin >> summ;

    if (summ > limit) {
        cout << " Превышен лимит выдачи банкоматом!" << endl;
    }
    else {
        if (summ <= 0) {
            cout << " Некорректно введена сумма!" << endl;
        }
        else {
            if (summ % banknote1 != 0) {
                cout << " Банкомат не может выдать " << summ << " рублей!" << endl;
                cout << " Введите сумму кратную " << banknote1 << " рублям." << endl;
            }
            else {
                numberOfBanknotes = summ / banknote6;
                if (numberOfBanknotes > 0) {
                    cout << numberOfBanknotes << " банкнот достоинством " << banknote6 << " рублей." << endl;
                }
                numberOfBanknotes = summ % banknote6 / banknote5;
                if (numberOfBanknotes > 0) {
                    cout << numberOfBanknotes << " банкнот достоинством " << banknote5 << " рублей." << endl;
                }
                numberOfBanknotes = summ % banknote6 % banknote5 / banknote4;
                if (numberOfBanknotes > 0) {
                    cout << numberOfBanknotes << " банкнот достоинством " << banknote4 << " рублей." << endl;
                }
                numberOfBanknotes = summ % banknote6 % banknote5 % banknote4 / banknote3;
                if (numberOfBanknotes > 0) {
                    cout << numberOfBanknotes << " банкнот достоинством " << banknote3 << " рублей." << endl;
                }
                numberOfBanknotes = summ % banknote6 % banknote5 % banknote4 % banknote3 / banknote2;
                if (numberOfBanknotes > 0) {
                    cout << numberOfBanknotes << " банкнот достоинством " << banknote2 << " рублей." << endl;
                }
                numberOfBanknotes = summ % banknote6 % banknote5 % banknote4 % banknote3 % banknote2 / banknote1;
                if (numberOfBanknotes > 0) {
                    cout << numberOfBanknotes << " банкнот достоинством " << banknote1 << " рублей." << endl;
                }

            }
        }
    }


    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}