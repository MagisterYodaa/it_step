#include <iostream>
#include "windows.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string firstName;
    int age;
    std::string profession;
    float time;
    std::string answer;


    std::cout << ">>Вы встретили человека<<" << std::endl;
    Sleep(1000);
    std::cout << ">>Вы собираетесь заговорить<<"<< std::endl;
    Sleep(1000);
    std::cout << "Не Вы: Здравствуй, как тебя зовут?" << std::endl;
    Sleep(1000);
    std::cout << "your name-> " << std::endl;
    std::cin >> firstName;
    std::cout << "Вы: Я " << firstName << std::endl;
    Sleep(1000);
    std::cout << "Вы: А Вас как?" << std::endl;
    Sleep(1000);
    std::cout << "Не Вы: А я Моховая Борода" << std::endl;
    Sleep(1000);
    std::cout << ">>В дальнейшем \"Не Вы\" будет обозначаться как \"Моховая Борода\"" << std::endl; 
    Sleep(3000);
    std::cout << "Моховая Борода: Сколько тебе лет?" << std::endl;
    Sleep(1000);
    std::cout << "your age-> " << std::endl;
    std::cin >> age;
    std::cout << "Вы: Мне " << age << std::endl;
    Sleep(1000);
    std::cout << "Моховая Борода: Хмм... Ты старше меня!" << std::endl;
    Sleep(1000);
    std::cout << "Моховая Борода: Кем ты работаешь?" << std::endl;
    Sleep(1000);
    std::cout << "your profession-> " << std::endl;
    std::cin >> profession;
    std::cout << "Вы: Я " << profession << std::endl;
    Sleep(1000);
    std::cout << "Моховая Борода: Очень интересно..." << std::endl;
    Sleep(1000);
    std::cout << "Моховая Борода: Сколько еще идти собираешься?" << std::endl;
    Sleep(1000);
    std::cout << "Моховая Борода: Я еще и дроби понимаю" << std::endl;
    Sleep(1000);
    std::cout << "Моховая Борода: Можешь сказать как в часах, так и в частях от часа..." << std::endl;
    Sleep(1000);
    std::cout << "time-> " << std::endl;
    std::cin >> time;
    std::cout << "Вы: Наверное еще где то " << time << std::endl;
    Sleep(1000);
    std::cout << "Моховая Борода: Довольно долго. Заходи ко мне в дом что бы отдохнуть..." << std::endl;
    std::cout << "your answer-> " << std::endl;
    std::cin >> answer;
    std::cout << "Вы:  " << answer << std::endl;
    Sleep(1000);
    std::cout << ">>Вы заходите в гости<<" << std::endl;
    Sleep(2000);
    std::cout << ">>Вы мертвы<<" << std::endl;
    Sleep(1000);
    std::cout << ">>Конец<<" << std::endl;
    
}
