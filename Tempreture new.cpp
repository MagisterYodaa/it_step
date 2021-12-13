#include <cstdlib>
#include <iostream>


int t(int tempreture = 0) {
    for (int i = 0; i < 7; i++) {
        tempreture = 0.01 + rand() % 100;
        if (tempreture <= 50) {
            std::cout << tempreture << std::endl;
            return 0;
        }
    }
    std::cout << tempreture << std::endl;
}


void cout() {
    // Выводим 100 случайных чисел
    for (int count = 0; count < 100; ++count)
    {
        t();

        // Если вывели 5 чисел, то вставляем символ новой строки
        if ((count + 1) % 5 == 0)
            std::cout << "\n";
    }
}



int main()
{
    cout();
}
