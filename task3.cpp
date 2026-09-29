#include <iostream>
#include <windows.h> // Нужно для корректного отображения русского текста в консоли
using namespace std;

int main() {
    // Принудительно включаем русский язык в консоли
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // 1. Переменные для ввода
    int attendance;      // Посещаемость в процентах
    int hasLabsInput;    // Ввод 0 или 1 для лабораторных

    // 2. Считываем данные
    cout << "Введите посещаемость (в процентах): ";
    cin >> attendance;

    cout << "Есть ли сданные лабораторные? (1 - да, 0 - нет): ";
    cin >> hasLabsInput;

    // 3. Преобразуем 0/1 в логический тип (bool)
    bool hasLabs = (hasLabsInput == 1);

    // 4. Проверяем условие допуска (&& означает логическое "И")
    bool isAllowed = (attendance >= 75) && hasLabs;

    // 5. Включаем вывод boolalpha (true/false вместо 1/0)
    cout << boolalpha;

    // 6. Выводим результат и пояснение
    cout << "Допуск: " << isAllowed << endl;

    if (isAllowed) {
        cout << "Студент допущен к экзамену." << endl;
    } else {
        cout << "Студент НЕ допущен. Причина: ";
        if (attendance < 75) {
            cout << "низкая посещаемость. ";
        }
        if (!hasLabs) { // Знак ! означает "НЕ" (если лабораторных нет)
            cout << "нет сданных лабораторных. ";
        }
        cout << endl;
    }

    return 0;
}
