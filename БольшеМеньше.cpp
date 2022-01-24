#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int randomNumber = rand() % 100;
    std::cout << "Компьютер загадал число" << std::endl;
    std::cout << "Начало игры" << std::endl;
    int a;
    while (true) {
        std::cout << "-> ";
        std::cin >> a;
        if (a == randomNumber) {
            std::cout << "Вы угадали число" << std::endl;
            break;
        }
        else if (a > randomNumber) {
            std::cout << "Меньше" << std::endl;
        }
        else if (a < randomNumber) {
            std::cout << "Больше" << std::endl;
        }
    }
}
