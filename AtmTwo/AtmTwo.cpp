#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");

    cout << endl;
    int const banknote1 = 100;  // Объявляем и инициализируем константные пременные с наминалом купюр
    int const banknote2 = 200;
    int const banknote3 = 500;
    int const banknote4 = 1000;
    int const banknote5 = 2000;
    int const banknote6 = 5000;
    int const limit = 150000;  // Объявляем и инициализируем константную пременную лимита выдачи суммы
    int summ = 0;              // Объявляем и инициализируем пременную для записи суммы запрашиваеммой в банкомате
    int numberOfBanknotes = 0; // Объявляем и инициализируем пременную для записи ко-ва купюр

    cout << " Введите сумму к выдаче: "; // Запрашиваем и записываем в переменную summ сумму для выдачи
    cin >> summ;

    if (summ > limit) {                  // Проверяем лимит выдаваемый банкоматом
        cout << " Превышен лимит выдачи банкоматом!" << endl;
    }
    else {
        if (summ <= 0) {                 // Проверяем корректность введённой суммы
            cout << " Некорректно введена сумма!" << endl;
        }
        else {
            if (summ % banknote1 != 0) { // Проверяем кратность запрашиваемой суммы 100 рублёвой банкноте
                cout << " Банкомат не может выдать " << summ << " рублей!" << endl; // Если не кратна выводим сообщение о не возможности данной операции
                cout << " Введите сумму кратную " << banknote1 << " рублям." << endl;
            }
            else {  // Иначе
                numberOfBanknotes = summ / banknote6; // Делим сумму на банкноты в 5000 рублей и если кол-во банктнот больше нуля то выводим
                if (numberOfBanknotes > 0) {          // сообщение о кол-ве банкнот с данным наминалом
                    cout << numberOfBanknotes << " банкнот достоинством " << banknote6 << " рублей." << endl;
                }
                numberOfBanknotes = summ % banknote6 / banknote5; // Вычисляем остаток от суммы делённый на 5000 купюры, деление остатка на 2000 купюры
                if (numberOfBanknotes > 0) {                      // вычисляем кол-во 2000 купюр и если их больше нуля то выводим сообщение
                    cout << numberOfBanknotes << " банкнот достоинством " << banknote5 << " рублей." << endl;//  о кол-ве банкнот с данным наминалом
                }
                numberOfBanknotes = summ % banknote6 % banknote5 / banknote4; // Вышеизложенное производим для остальных купюр
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