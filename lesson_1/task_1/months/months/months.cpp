// NetoHomework_3_1_01
// Author: Ryabinkin Alexey
// Data: 03.03.25

#include <iostream>

enum class months
{
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    int number{};
    do
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> number;
        
        months month = static_cast <months> (number);
        
        switch (month)
        {
        case months::january:
            std::cout << "Январь" << std::endl;
            break;
        case months::february:
            std::cout << "Февраль" << std::endl;
            break;
        case months::march:
            std::cout << "Март" << std::endl;
            break;
        case months::april:
            std::cout << "Апрель" << std::endl;
            break;
        case months::may:
            std::cout << "Май" << std::endl;
            break;
        case months::june:
            std::cout << "Июнь" << std::endl;
            break;
        case months::july:
            std::cout << "Июль" << std::endl;
            break;
        case months::august:
            std::cout << "Август" << std::endl;
            break;
        case months::september:
            std::cout << "Сентябрь" << std::endl;
            break;
        case months::october:
            std::cout << "Октябрь" << std::endl;
            break;
        case months::november:
            std::cout << "Ноябрь" << std::endl;
            break;
        case months::december:
            std::cout << "Декабрь" << std::endl;
            break;
        default:
            if (number != 0)
            {
                std::cout << "Неправильный номер!" << std::endl;
            }
            break;
        }
    } while (number != 0);
    
    std::cout << "До свидания!" << std::endl;
    
    return 0;
}

