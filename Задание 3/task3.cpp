#include <iostream>
#include <windows.h> 

int main() {
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    
    int attendance;      
    int hasLabsInput;    

    
    cout << "Введите посещаемость (в процентах): ";
    cin >> attendance;

    cout << "Есть ли сданные лабораторные? (1 - да, 0 - нет): ";
    cin >> hasLabsInput;

 
    bool hasLabs = (hasLabsInput == 1);
    bool isAllowed = (attendance >= 75) && hasLabs;

    
    cout << boolalpha;

 
    cout << "Допуск: " << isAllowed << endl;

    if (isAllowed) {
        cout << "Студент допущен к экзамену." << endl;
    } else {
        cout << "Студент НЕ допущен. Причина: ";
        if (attendance < 75) {
            cout << "низкая посещаемость. ";
        }
        if (!hasLabs) {
            cout << "нет сданных лабораторных. ";
        }
        cout << endl;
    }

    return 0;
}
