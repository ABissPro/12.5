#include <cassert>
#include <iostream>

int main()
{
    system("chcp 1251"); // Установить кодировку
    std::string neighbours [10] = {};
    std::string surname;
    int apartment;
    std::cout << "Введите фамилии 10-ти жильцов:\n";
    for (int i = 0; i < 10; i++) {
        std::cin >> surname;
        neighbours[i] = surname;
    }
    for (int ap = 0; ap < 3; ap++) {
        std::cout << "Введите номер квартиры:\n";
        std::cin >> apartment;
        assert(apartment > 0 && apartment <= 10);
        std::cout << neighbours[apartment - 1] << "\n";

    }
    
}